/****************************/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "CommaDecorator.hpp"
using namespace std;
/****************************/


void replaceAll( std::string& str, const std::string& from, const std::string& to ) {
    if( from.empty() )
        return;
    size_t start_pos = 0;
    while( ( start_pos = str.find( from, start_pos ) ) != std::string::npos ) {
        str.replace( start_pos, from.length(), to );
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

string CommaDecorator::toString() {
    string s = StreamDecorator::toString();
    replaceAll( s, " ", " , " );
    return s;
}

