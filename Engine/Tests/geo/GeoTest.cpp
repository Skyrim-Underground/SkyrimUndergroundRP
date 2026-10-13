// SPDX-License-Identifier: AGPL-3.0-or-later
#include "ConvexPolyhedron.h"

#include <catch2/catch_test_macros.hpp>
#include <cmath>
#include <vector>

using geo::ConvexPolyhedron;
using geo::Point3;

namespace {

std::vector<Point3> BoxCorners()
{
  std::vector<Point3> corners;
  for (float x : { -50.f, 50.f }) {
    for (float y : { -30.f, 30.f }) {
      for (float z : { -20.f, 20.f }) {
        corners.push_back({ x, y, z });
      }
    }
  }
  return corners;
}

void CheckBoxAnswers(const ConvexPolyhedron& box)
{
  CHECK(box.Contains({ 0.f, 0.f, 0.f }));
  CHECK(box.Contains({ 50.f, 30.f, 20.f }));

  struct Face
  {
    Point3 centre;
    Point3 outward;
  };
  const Face faces[] = { { { 50.f, 0.f, 0.f }, { 0.5f, 0.f, 0.f } },
                         { { -50.f, 0.f, 0.f }, { -0.5f, 0.f, 0.f } },
                         { { 0.f, 30.f, 0.f }, { 0.f, 0.5f, 0.f } },
                         { { 0.f, -30.f, 0.f }, { 0.f, -0.5f, 0.f } },
                         { { 0.f, 0.f, 20.f }, { 0.f, 0.f, 0.5f } },
                         { { 0.f, 0.f, -20.f }, { 0.f, 0.f, -0.5f } } };
  for (const Face& f : faces) {
    const Point3& c = f.centre;
    const Point3& o = f.outward;
    CHECK(box.Contains(c));
    CHECK_FALSE(box.Contains({ c.x + o.x, c.y + o.y, c.z + o.z }));
  }
}

}

TEST_CASE("Axis-aligned box", "[geo]")
{
  CheckBoxAnswers(ConvexPolyhedron(BoxCorners()));
}

TEST_CASE("Rotated box from the primitive corner formula", "[geo]")
{
  const double pi = std::acos(-1.0);
  const double rotZ = 37.0 * pi / 180.0;
  const double pos[3] = { 24000.0, -10176.0, -3392.0 };
  const double boundsDiv2[3] = { 110.0, 150.0, 90.0 };

  // Same loops as Primitive::GetVertices.
  std::vector<Point3> vertices;
  for (int zk : { -1, 1 }) {
    for (int k : { 1, -1 }) {
      for (double a : { pi / 2, -pi / 2 }) {
        const double x = pos[0] + k * std::cos(rotZ) * boundsDiv2[1] +
          k * std::cos(rotZ + a) * boundsDiv2[0];
        const double y = pos[1] + k * std::sin(rotZ) * boundsDiv2[1] +
          k * std::sin(rotZ + a) * boundsDiv2[0];
        const double z = pos[2] + zk * boundsDiv2[2];
        vertices.push_back({ static_cast<float>(x), static_cast<float>(y),
                             static_cast<float>(z) });
      }
    }
  }
  const ConvexPolyhedron box(vertices);

  struct Face
  {
    double nx, ny, nz, halfExtent;
  };
  const double c = std::cos(rotZ);
  const double s = std::sin(rotZ);
  const Face faces[] = { { c, s, 0.0, boundsDiv2[1] },
                         { -c, -s, 0.0, boundsDiv2[1] },
                         { -s, c, 0.0, boundsDiv2[0] },
                         { s, -c, 0.0, boundsDiv2[0] },
                         { 0.0, 0.0, 1.0, boundsDiv2[2] },
                         { 0.0, 0.0, -1.0, boundsDiv2[2] } };
  for (const Face& f : faces) {
    auto alongNormal = [&](double distance) {
      return Point3{ static_cast<float>(pos[0] + f.nx * distance),
                     static_cast<float>(pos[1] + f.ny * distance),
                     static_cast<float>(pos[2] + f.nz * distance) };
    };
    CHECK(box.Contains(alongNormal(f.halfExtent - 0.5)));
    CHECK_FALSE(box.Contains(alongNormal(f.halfExtent + 0.5)));
  }
}

TEST_CASE("Duplicate corners and a vertex on a face", "[geo]")
{
  std::vector<Point3> vertices = BoxCorners();
  vertices.push_back(vertices[0]);
  vertices.push_back(vertices[5]);
  vertices.push_back({ 50.f, 0.f, 0.f });
  CheckBoxAnswers(ConvexPolyhedron(vertices));
}

TEST_CASE("Flat input and fewer than four points contain nothing", "[geo]")
{
  const std::vector<std::vector<Point3>> inputs = {
    { { -50.f, -30.f, 0.f },
      { 50.f, -30.f, 0.f },
      { 50.f, 30.f, 0.f },
      { -50.f, 30.f, 0.f },
      { 0.f, 0.f, 0.f } },
    { { 0.f, 0.f, 0.f }, { 10.f, 0.f, 0.f }, { 0.f, 10.f, 0.f } },
    { { 0.f, 0.f, 0.f }, { 10.f, 0.f, 0.f } },
    { { 0.f, 0.f, 0.f } },
    {}
  };
  const Point3 probes[] = { { 0.f, 0.f, 0.f },
                            { 1.f, 1.f, 0.f },
                            { 10.f, 5.f, 0.f },
                            { 0.f, 0.f, 1.f },
                            { 0.f, 0.f, -1.f },
                            { 100.f, 100.f, 100.f } };
  for (size_t i = 0; i < inputs.size(); ++i) {
    INFO("input " << i);
    const ConvexPolyhedron polyhedron(inputs[i]);
    for (const Point3& p : probes) {
      CHECK_FALSE(polyhedron.Contains(p));
    }
  }
}

TEST_CASE("Tetrahedron", "[geo]")
{
  const ConvexPolyhedron tetrahedron({ { 0.f, 0.f, 0.f },
                                       { 10.f, 0.f, 0.f },
                                       { 0.f, 10.f, 0.f },
                                       { 0.f, 0.f, 10.f } });
  CHECK(tetrahedron.Contains({ 2.5f, 2.5f, 2.5f }));
  CHECK_FALSE(tetrahedron.Contains({ -1.f, 2.f, 2.f }));
  CHECK_FALSE(tetrahedron.Contains({ 2.f, -1.f, 2.f }));
  CHECK_FALSE(tetrahedron.Contains({ 2.f, 2.f, -1.f }));
  CHECK_FALSE(tetrahedron.Contains({ 4.f, 4.f, 4.f }));
}
