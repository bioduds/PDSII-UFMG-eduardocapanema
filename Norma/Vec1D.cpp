#include <iostream>
#include "Vec.hpp"
#include "Vec1D.hpp"
#include <math.h>
using namespace std;
/**************************/

// Implementando construtor
//double Vec1D::getX() {
//    cout << "Getting _x" << endl;
//    return _x;
//}

double Vec1D::get_norm() const {
    return sqrt( _x*_x );
}

string Vec1D::to_string() const {
    return "uma string...";
}
