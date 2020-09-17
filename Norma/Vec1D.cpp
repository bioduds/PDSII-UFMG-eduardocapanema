#include <iostream>
#include "Vec.hpp"
#include "Vec1D.hpp"
using namespace std;
/**************************/

// Implementando construtor
//double Vec1D::getX() {
//    cout << "Getting _x" << endl;
//    return _x;
//}

double Vec1D::get_norm() const {
    cout << "RETORNANDO VEC1D NORM" << endl;
    return 0.1;
}

string Vec1D::to_string() const {
    cout << "RETORNANDO TO STRING" << endl;
    return "uma string...";
}
