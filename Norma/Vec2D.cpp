#include <iostream>
#include "Vec2D.hpp"
#include <math.h>

double Vec2D::get_norm() const {
    return sqrt( _x*_x + _y*_y );
}

string Vec2D::to_string() const {
    return "uma string...";
}
