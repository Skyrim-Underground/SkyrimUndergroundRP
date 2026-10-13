// SPDX-License-Identifier: AGPL-3.0-or-later
#pragma once
#include <vector>

namespace geo {

struct Point3
{
  float x = 0.f;
  float y = 0.f;
  float z = 0.f;
};

// Convex hull of a point set kept as outward face planes; points on the surface count as inside.
class ConvexPolyhedron
{
public:
  explicit ConvexPolyhedron(const std::vector<Point3>& vertices);

  bool Contains(const Point3& point) const;

private:
  struct Plane
  {
    double nx, ny, nz, d;
  };

  std::vector<Plane> planes;
  double epsilon = 0.0;
};

}
