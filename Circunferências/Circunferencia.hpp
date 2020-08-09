#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

struct Circunferencia {

    int xc, yc, raio; // coordenadas do centro e raio

    // Construtor
    Circunferencia( int _xc, int _yc, int _raio ) {
        xc = _xc;
        yc = _yc;
        raio = _raio;
    }

    // Métodos
    double calcularArea();
    bool possuiIntersecao( struct Circunferencia *c );

};
#endif

