/*******************************/
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Estudante.hpp"
#include "stdio.h"
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;
/*******************************/

int main() {

    cout << "Iniciando Programa..." << endl;
    Estudante* estudante = new Estudante[10];
    int mat;
    char* nome = new char[7];
    float a, b, c, d, e;
    vector<Estudante> estudantes(10);

    cout << fixed << showpoint; 
    cout << setprecision(2);

    for( int i=0; i<10; i++ ) {
        
        // ler entrada
        scanf( "%d %s %f %f %f %f %f", &mat, nome, &a, &b, &c, &d, &e );

        // preenche struct
        estudante[i].matricula = mat;
        estudante[i].nome = (string) nome;
        estudante[i].notas[0] = a;
        estudante[i].notas[1] = b;
        estudante[i].notas[2] = c;
        estudante[i].notas[3] = d;
        estudante[i].notas[4] = e;
        estudante[i].rsg = estudante[i].calcularRSG(); // voltando zerado??

        // assign no vetor        
        estudantes[i] = estudante[i];

    }

    // ordena por matricula e depois por rsg
    sort( estudantes.begin(), estudantes.end(), estudante->ordenar );
    sort( estudantes.begin(), estudantes.end(), estudante->comparar );
    for( int i=0; i<10; i++ ) {
        cout 
            << "" << estudantes[i].matricula
            << " " << estudantes[i].nome 
            << " " << estudantes[i].rsg 
            << endl;
    }

    return 0;
} 

