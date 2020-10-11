#ifndef POINT_H
#define POINT_H
#include <iostream>

static double xSUM, ySUM = 0;

class Point {

  public:
    Point( double xx = 0, double yy = 0 ) : x( xx ), y( yy ) {}
    double getX() const { return x; }
    double getY() const { return y; }
    friend std::ostream & operator << ( std::ostream &out, const Point &p );
    friend std::istream & operator >> ( std::istream &in, Point &p );
    Point & operator + ( Point &p );
    Point & operator += ( Point &p );
    double x;
    double y;

};

#endif