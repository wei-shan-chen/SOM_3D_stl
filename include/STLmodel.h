#ifndef STLMODEL_H
#define STLMODEL_H

#include <vector>
#include <glm/glm.hpp>

#include "Vertex.h"
typedef float vector3f[3];

class STLmodel{
public:
    STLmodel();
    ~STLmodel();
    bool LoadSTLfile(const char *stlFileName);
    std::vector<Vertex> m_MeshTri;
    int triangleNum = 0;
    float m_scale = 100;
    glm::fvec3 m_MaxPos;
    glm::fvec3 m_MinPos;
};

#endif