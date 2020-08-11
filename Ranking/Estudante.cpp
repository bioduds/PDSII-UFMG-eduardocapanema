#include <iostream>
#include <string>
#include "Estudante.hpp"

float Estudante::calcularRSG() {
    float media = ( ( (float)notas[0] + (float)notas[1] + (float)notas[2] + (float)notas[3] + (float)notas[4] ) / (float)5 );
    return media;
} 

bool Estudante::ordenar( const Estudante &a, const Estudante &b ) {
    return a.matricula < b.matricula;
}

bool Estudante::comparar( const Estudante &a, const Estudante &b ) {
    return a.rsg > b.rsg;
}
