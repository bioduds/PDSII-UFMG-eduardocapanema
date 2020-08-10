#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include "Estudante.hpp"
using namespace std;

int main() {

    cout << "Iniciando Programa..." << endl;

    Estudante* estudantes = new Estudante[10];

    string* lines = new string[10];
    vector<string>* parsedLine = new vector<string>[10][7];


    for( int i=0; i<10; i++ ) {
        getline( cin, lines[i] );

    }

    for( int i=0; i<10; i++ ) {
        cout << "Teste Leitura..." 
            << lines[i]
            << endl; // inc
    }

    return 0;
} 