/****************************/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "CommaDecorator.hpp"
using namespace std;
/****************************/

size_t split( const string &txt, vector<string> &strs, char ch ) {
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

string CommaDecorator::toString() {
    string s = StreamDecorator::toString();
    vector<std::string> v;
    split( s, v, ' ' );
    string r = "(";
    for( int i=1; i<v.size(); i++ ) {
        r += " , " + v[i];
    }
    return r;
}

