/****************************/
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include "CommaDecorator.hpp"
using namespace std;
/****************************/

string CommaDecorator::toString() {
    // add virgulas entre cada token entre espaços

    string s = StreamDecorator::toString();
    replace( s.begin(), s.end(), ' ', ',');
    
    return s;
}

