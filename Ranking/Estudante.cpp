#include <iostream>
#include <string>
#include "Estudante.hpp"

float Estudante::calcularRSG() {
    float media = ( ( (float)notas[0] + (float)notas[1] + (float)notas[2] + (float)notas[3] + (float)notas[4] ) / (float)5 );
    std::cout << "recebendo " << (float)notas[0];
    std::cout << "media: " << media;
    return media;
} 

    // Atributos
    //std::string nome;
    //int matricula;
    //float notas[5];

