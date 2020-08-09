#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

#include <iostream>
#include <cstdlib>
#include <iomanip>

struct Circunferencia {

    double _xc, _yc, _raio; // coordenadas do centro e raio

    // Construtor
    Circunferencia( double xc, double yc, double raio ) {
    //    this->_xc = xc;
    //    this->_yc = yc;
    //    this->_raio = raio;
    }

    // Métodos
    double calcularArea();
    bool possuiIntersecao( struct Circunferencia *c );

};

#endif

