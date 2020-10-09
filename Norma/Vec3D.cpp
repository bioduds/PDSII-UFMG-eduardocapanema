#include <iostream>
#include "Vec3D.hpp"
#include <math.h>

double Vec3D::get_norm() const {
    return sqrt( _x*_x + _y*_y + _z*_z );
}

string Vec3D::to_string() const {
    return "uma string...";
}

