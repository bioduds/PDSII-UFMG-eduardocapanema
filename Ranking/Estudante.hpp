#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include <string>

struct Estudante {

    // Atributos
    std::string nome;
    int matricula;
    float notas[5];

    // Métodos
    float calcularRSG();
    
};

#endif