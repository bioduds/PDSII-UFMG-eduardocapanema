#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include <string>

struct Estudante {
  std::string nome;
  int matricula;
  float notas[5];

  float calcularRSG();
};

#endif