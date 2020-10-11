#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {

  public:
    Point( double xx = 0, double yy = 0 ) : x( xx ), y( yy ) {}
    double getX() const { return x; }
    double getY() const { return y; }
    friend std::ostream & operator << ( std::ostream &out, const Point &c );
    friend std::istream & operator >> ( std::istream &in,  Point &c );
    Point & operator + ( Point &p );
    Point & operator += ( Point &p );

  private:
    double x;
    double y;

};

#endif