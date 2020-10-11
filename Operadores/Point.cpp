#include <iostream>
#include "Point.h"

std::ostream & operator << ( std::ostream &out, const Point &p ) {
    // TODO: implement this operator.
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}

std::istream& operator >> ( std::istream& in,  Point& p ) {
    // TODO: implement this operator.
    //in >> p;
    //std::cout << "show me p: " << p.getX() << std::endl;
    return in;
}

Point & Point::operator + ( Point &p ) {
    // TODO: implement this operator.
    p.x = x + p.x; p.y = y + p.y;
    //this.x + p.getX();
    return p;
}

Point & Point::operator += ( Point &p ) {
    // TODO: implement this operator.
    xSUM += p.x; ySUM += p.y;
    p.x = xSUM; p.y = ySUM;
    x = xSUM; y = ySUM;
    return p;
}
