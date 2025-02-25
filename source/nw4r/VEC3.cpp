// Deli! These vectors are for 3D space. Don't use them for 2D space!
#include <../include/nw4r/vec.hpp>
#include <../include/types.h>
using namespace nw4r::math;

// OPERATORS: new operation game!

VEC3 VEC3::operator+(const VEC3& other) const {
    VEC3 out;
    
    out.x = this->x + other.x;
    out.y = other.y + this->y;
    out.z = other.z + this->z;
    return out;
}

VEC3 VEC3::operator+=(const VEC3& other) {
    VEC3 out;

    this->x = this->x + other.x;
    this->y = this->y + other.y;
    this->z = this->z + other.z;
    return out;
}
