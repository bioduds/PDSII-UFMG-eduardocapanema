#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Estudante.hpp"
#include "stdio.h"
using namespace std;

vector<string> split( string str, string token ) {
    
    vector<string> result;
    while( str.size() ) {
        int index = str.find( token );
        if( index != string::npos ) {
            result.push_back( str.substr( 0, index ) );
            str = str.substr( index+token.size() );
            if( str.size() == 0 )result.push_back( str );
        } else {
            result.push_back( str );
            str = " ";
        }
    }
    return result;
}

int main() {

    cout << "Iniciando Programa..." << endl;

    Estudante* estudante = new Estudante[10];

    //string* lines = new string[10];

    int mat;
    char* nome = new char[7];
    float a, b, c, d, e;

    vector<Estudante> estudantes(10);

    for( int i=0; i<10; i++ ) {
        //getline( cin, lines[i] );
        
        scanf( "%d %s %f %f %f %f %f", &mat, nome, &a, &b, &c, &d, &e );

        estudante[i].matricula = mat;
        estudante[i].nome = (string) nome;
        estudante[i].notas[0] = a;
        estudante[i].notas[1] = b;
        estudante[i].notas[2] = c;
        estudante[i].notas[3] = d;
        estudante[i].notas[4] = e;

        estudantes[i].rsg = estudante[i].calcularRSG(); // voltando zerado??
        
        estudantes[i] = estudante[i];
        
        cout << "Nome: " << estudantes[i].nome 
            << " Mat: " << estudantes[i].matricula
            << " RSG: " << estudantes[i].rsg 
            << " Nota 1: " << estudantes[i].notas[0]
            << " Nota 2: " << estudantes[i].notas[1]
            << " Nota 3: " << estudantes[i].notas[2]
            << " Nota 4: " << estudantes[i].notas[3]
            << " Nota 5: " << estudantes[i].notas[4]
            << endl;


        

    }

    return 0;
} 

