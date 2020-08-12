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

struct EstudanteRSG {

    // Atributos
    string nome;
    int matricula;
    float notas[5];
    float rsg;

};

bool ordenar( const Estudante &a, const Estudante &b ) {
    return a.matricula > b.matricula;
}

bool comparar( const EstudanteRSG &a, const EstudanteRSG &b ) {
    return a.rsg >= b.rsg;
}


int main() {

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

        // assign no vetor        
        estudantes[i] = estudante[i];

    }

    // ordena por matricula
    sort( estudantes.begin(), estudantes.end(), ordenar );

    EstudanteRSG* estudanteRSG = new EstudanteRSG[10];
    vector<EstudanteRSG> estudantesRSG(10);

    for( int i=0; i<10; i++ ) {
        
        // ler entrada

        // preenche struct
        estudanteRSG[i].matricula = estudantes[i].matricula;
        estudanteRSG[i].nome = estudantes[i].nome;
        estudanteRSG[i].notas[0] = estudantes[i].notas[0];
        estudanteRSG[i].notas[1] = estudantes[i].notas[1];
        estudanteRSG[i].notas[2] = estudantes[i].notas[2];
        estudanteRSG[i].notas[3] = estudantes[i].notas[3];
        estudanteRSG[i].notas[4] = estudantes[i].notas[4];
        estudanteRSG[i].rsg = estudantes[i].calcularRSG();

        // assign no vetor        
        estudantesRSG[i] = estudanteRSG[i];

    }

    // ordena por RSG
    sort( estudantesRSG.begin(), estudantesRSG.end(), comparar );
    for( int i=0; i<3; i++ ) {
        cout 
            << "" << estudantesRSG[i].matricula
            << " " << estudantesRSG[i].nome 
            << " " << estudantesRSG[i].rsg 
            << endl;
    }

    return 0;
} 

