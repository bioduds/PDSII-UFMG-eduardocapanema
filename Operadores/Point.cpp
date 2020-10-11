#include <iostream>
#include "Point.h"

// Point::Point( double xx = 0, double yy = 0 ) : x( xx ), y( yy ) {
//     std::cout << "Construtor" << std::endl; 
// }

std::ostream & operator << ( std::ostream &out, const Point &p ) {
    // TODO: implement this operator.
    return out;
}

std::istream & operator >> ( std::istream &in,  Point &p ) {
    // TODO: implement this operator.
    return in;
}

Point & Point::operator + ( Point &p ) {
    // TODO: implement this operator.
    return p;
}

Point & Point::operator += ( Point &p ) {
    // TODO: implement this operator.
    return p;
}