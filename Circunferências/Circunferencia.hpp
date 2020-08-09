#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H
/**********************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;
/**********************/

struct Circunferencia {

    double _xc, _yc, _raio; // coordenadas do centro e raio

    // Construtor
    Circunferencia( double xc, double yc, double raio ) {
        _xc = xc;
        _yc = yc;
        _raio = raio;
    }

    // Métodos
    double calcularArea();
    bool possuiIntersecao( struct Circunferencia *c );

};

#endif

