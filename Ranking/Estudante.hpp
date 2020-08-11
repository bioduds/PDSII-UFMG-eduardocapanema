#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include <string>

struct Estudante {

    // Atributos
    std::string nome;
    int matricula;
    float notas[5];
    float rsg;

    // Métodos
    float calcularRSG();
    static bool ordenar( const Estudante &a, const Estudante &b );
    static bool comparar( const Estudante &a, const Estudante &b );

};

#endif 