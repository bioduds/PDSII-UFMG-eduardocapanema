/****************************/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <locale>
#include "NumberDecorator.hpp"
using namespace std;
/****************************/

size_t split_n( const string &txt, vector<string> &strs, char ch ) {
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();
    // Decompose statement
    while( pos != string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;
        pos = txt.find( ch, initialPos );
    }
    // Add the last one
    strs.push_back( txt.substr( initialPos, min( pos, txt.size() ) - initialPos + 1 ) );
    return strs.size();
}

string NumberDecorator::toString() {
    string s = StreamDecorator::toString();
    vector<string> v;
    split_n( s, v, ' ' );
    string r;
    std::locale loc;
    for( int i=0; i<=v.size(); i++ ) {
        if( std::isdigit( v[i][0], loc ) ) {
            r += "+" + v[i];
        }
    }
    return r;
}
