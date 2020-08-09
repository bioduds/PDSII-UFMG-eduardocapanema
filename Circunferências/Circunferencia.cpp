/****************************************/
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include "Circunferencia.hpp"
#define PI 3.14
using namespace std;
/****************************************/


double Circunferencia::calcularArea() {
    // cout << _raio << endl;
    return PI*_raio*_raio;
}

bool Circunferencia::possuiIntersecao( struct Circunferencia *c ) {

    /* OBS:
       possuir interseção significa que existe pelo menos um ponto Pc1 = Pc2
       calculamos somando os raios e verificando se a soma é maior ou igual à distancia 
       entre os pontos centrais das circunferencias
    */

    double raios = _raio + c->_raio;
    double diff_x = pow( ( c->_xc -_xc ), (double)2 );
    double diff_y = pow( ( c->_yc -_yc ), (double)2 );
    double dist = sqrt( ( diff_y + diff_x ) );

/*    cout << endl 
         << "Raios: " << raios
         << " Dist: " << dist
         << endl
         << "Diff_y: " << diff_y
         << "Diff_x: " << diff_x
         << endl
         << "Sqrt 2: " << sqrt(2);
*/
    return ( raios >= dist );

}

