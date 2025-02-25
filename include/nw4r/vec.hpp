#pragma once

namespace nw4r {
namespace math {

/// @brief A two-dimensional floating point vector.
struct VEC2 {
    float x, y;

    /// @brief Create a two-dimensional floating point vector.
    VEC2() {}

    /// @brief Create and set a two-dimensional floating point vector.
    /// @param fx X position
    /// @param fy Y position
    VEC2(float fx, float fy) { x = fx; y = fy; }

};

/// @brief A three-dimensional floating point vector.
struct VEC3 {
    float x, y, z;

    /// @brief Create a three-dimensional floating point vector.
    VEC3() {}

    /// @brief Create and set a three-dimensional floating point vector.
    /// @param fx X position
    /// @param fy Y position
    /// @param fz Z position
    VEC3(float fx, float fy, float fz) { x = fx; y = fy; z = fz; }

    // operators from base NW4R
    VEC3 operator+(const VEC3& other) const;
    VEC3 operator+=(const VEC3& other); // cannot be constant due to jargon, kill me
    VEC3 operator-(const VEC3& other) const;
    VEC3 operator=(const VEC3& other) const;

    // was going to add the "Report" function here but it's evil so i'll do it later
    
};

} // namespace math
} // namespace nw4r
