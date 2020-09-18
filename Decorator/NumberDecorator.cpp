/****************************/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <stdio.h>
#include <cctype>
#include <cstring>
#include "NumberDecorator.hpp"
using namespace std;
/****************************/


void replaceAll2( std::string& str, const std::string& from, const std::string& to ) {
    if( from.empty() )
        return;
    size_t start_pos = 0;
    while( ( start_pos = str.find( from, start_pos ) ) != std::string::npos ) {
        str.replace( start_pos, from.length(), to );
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}

bool is_number(const std::string& s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

string getNumberFromString( string s ) {
    string retStr;
    stringstream str_strm;
    str_strm << s; //convert the string s into stringstream
    string temp_str;
    int temp_int;
    while( !str_strm.eof() ) {
        str_strm >> temp_str; //take words into temp_str one by one
        if( is_number( temp_str ) ) {
            //cout << temp_int << " DIGIT: " << temp_str << endl;
            retStr += " +" + temp_str;
            string nS = "+" + temp_str;
            replaceAll2( s, temp_str, nS );
        } else {
            retStr += temp_str + " ";
        }

        if( stringstream( temp_str ) >> temp_int ) { //try to convert string to int
            //cout << temp_int << " ";
        }
        temp_str = ""; //clear temp string
    }
    replaceAll2( s, "+1+2", "+12" );
    replaceAll2( s, "+12+3", "+123" );
    return s;
}

string NumberDecorator::toString() {

    string s = StreamDecorator::toString();

    string nStr = getNumberFromString(s);
    //cout << "Returned String: " << nStr << endl;

    return nStr;
}
