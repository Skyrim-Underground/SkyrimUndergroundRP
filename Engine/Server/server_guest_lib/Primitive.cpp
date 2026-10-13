#include "Primitive.h"
#include <cmath>

std::vector<NiPoint3> Primitive::GetVertices(NiPoint3 pos, NiPoint3 rotRad,
                                             NiPoint3 boundsDiv2)
{
  std::vector<NiPoint3> res;
  static const float pi = acosf(-1);

  for (auto zk : { -1, 1 })
    for (auto k : { 1, -1 }) {
      for (auto a : { pi / 2, -pi / 2 }) {
        auto p = pos;
        p.x += k * cos(rotRad.z) * boundsDiv2[1];
        p.x += k * cos(rotRad.z + a) * boundsDiv2[0];
        p.y += k * sin(rotRad.z) * boundsDiv2[1];
        p.y += k * sin(rotRad.z + a) * boundsDiv2[0];
        p.z += zk * boundsDiv2[2];
        res.push_back(p);
      }
    }

  return res;
}

std::vector<NiPoint3> Primitive::GetVertices(const espm::REFR* refr)
{
  espm::CompressedFieldsCache dummyCache;

  auto data = refr->GetData(dummyCache);
  NiPoint3 pos = { data.loc->pos[0], data.loc->pos[1], data.loc->pos[2] };
  NiPoint3 rotRad = { data.loc->rotRadians[0], data.loc->rotRadians[1],
                      data.loc->rotRadians[2] };
  NiPoint3 boundsDiv2 = { data.boundsDiv2[0], data.boundsDiv2[1],
                          data.boundsDiv2[2] };
  return GetVertices(pos, rotRad, boundsDiv2);
}

geo::ConvexPolyhedron Primitive::CreateGeoPolygonProc(
  const std::vector<NiPoint3>& vertices)
{
  std::vector<geo::Point3> points;
  points.reserve(vertices.size());
  for (const NiPoint3& v : vertices) {
    points.push_back({ v.x, v.y, v.z });
  }
  return geo::ConvexPolyhedron(points);
}

bool Primitive::IsInside(const NiPoint3& point,
                         const geo::ConvexPolyhedron& polyhedron)
{
  return polyhedron.Contains({ point.x, point.y, point.z });
}
