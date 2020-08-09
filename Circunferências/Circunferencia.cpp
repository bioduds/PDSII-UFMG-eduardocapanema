/****************************************/
#include <iostream>
#include <iomanip>
#include <math.h>
#include "Circunferencia.hpp"
#define PI 3.14
using namespace std;
/****************************************/

double Circunferencia::calcularArea() {
    return PI*raio*raio;
}

bool Circunferencia::possuiIntersecao( struct* Circunferencia c ) {

    /* OBS:
       possuir interseção significa que existe pelo menos um ponto Pc1 = Pc2
       calculamos somando os raios e verificando se a soma é maior ou igual à distancia 
       entre os pontos centrais das circunferencias
    */

    return false;

}

