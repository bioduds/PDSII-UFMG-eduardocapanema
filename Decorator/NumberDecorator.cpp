/****************************/
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include "NumberDecorator.hpp"
using namespace std;
/****************************/

std::string NumberDecorator::toString() {

    string s = StreamDecorator::toString();
    replace( s.begin(), s.end(), ' ', '+');

    return s;
}