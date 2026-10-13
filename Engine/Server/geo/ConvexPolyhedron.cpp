// SPDX-License-Identifier: AGPL-3.0-or-later
#include "ConvexPolyhedron.h"

#include <algorithm>
#include <cmath>
#include <cstddef>

namespace geo {

namespace {

struct Vec3
{
  double x, y, z;
};

Vec3 Subtract(const Vec3& a, const Vec3& b)
{
  return { a.x - b.x, a.y - b.y, a.z - b.z };
}

Vec3 Cross(const Vec3& a, const Vec3& b)
{
  return { a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z,
           a.x * b.y - a.y * b.x };
}

double Dot(const Vec3& a, const Vec3& b)
{
  return a.x * b.x + a.y * b.y + a.z * b.z;
}

}

ConvexPolyhedron::ConvexPolyhedron(const std::vector<Point3>& vertices)
{
  std::vector<Vec3> points;
  points.reserve(vertices.size());
  double maxAbsCoordinate = 0.0;
  for (const Point3& v : vertices) {
    points.push_back({ v.x, v.y, v.z });
    maxAbsCoordinate = std::max({ maxAbsCoordinate, std::abs(double(v.x)),
                                  std::abs(double(v.y)),
                                  std::abs(double(v.z)) });
  }
  epsilon = 1e-6 * maxAbsCoordinate + 1e-3;

  const size_t count = points.size();
  for (size_t i = 0; i < count; ++i) {
    for (size_t j = i + 1; j < count; ++j) {
      for (size_t k = j + 1; k < count; ++k) {
        Vec3 n = Cross(Subtract(points[j], points[i]),
                       Subtract(points[k], points[i]));
        const double length = std::sqrt(Dot(n, n));
        if (length < 1e-9) {
          continue;
        }
        n = { n.x / length, n.y / length, n.z / length };
        double d = -Dot(n, points[i]);

        int above = 0;
        int below = 0;
        for (size_t m = 0; m < count; ++m) {
          if (m == i || m == j || m == k) {
            continue;
          }
          const double s = Dot(n, points[m]) + d;
          if (s > epsilon) {
            ++above;
          } else if (s < -epsilon) {
            ++below;
          }
        }
        // Vertices on both sides: not a face. On neither side: all coplanar.
        if ((above > 0) == (below > 0)) {
          continue;
        }
        if (above > 0) {
          n = { -n.x, -n.y, -n.z };
          d = -d;
        }

        const bool known =
          std::any_of(planes.begin(), planes.end(), [&](const Plane& p) {
            return n.x * p.nx + n.y * p.ny + n.z * p.nz > 1 - 1e-9 &&
              std::abs(d - p.d) <= epsilon;
          });
        if (!known) {
          planes.push_back({ n.x, n.y, n.z, d });
        }
      }
    }
  }
}

bool ConvexPolyhedron::Contains(const Point3& point) const
{
  if (planes.empty()) {
    return false;
  }
  return std::all_of(planes.begin(), planes.end(), [&](const Plane& p) {
    return p.nx * point.x + p.ny * point.y + p.nz * point.z + p.d <= epsilon;
  });
}

}
