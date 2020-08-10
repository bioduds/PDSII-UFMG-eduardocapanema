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

    Estudante* estudantes = new Estudante[10];

    string* lines = new string[10];

    
    for( int i=0; i<10; i++ ) {
        getline( cin, lines[i] );

    }

    vector<string> v;
    for( int j=0; j<10; j++ ) {

        v = split( lines[j], " " );
        cout << "v" << endl;

    }

    return 0;
} 

