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

string NumberDecorator::toString() {

    string s = StreamDecorator::toString();
    cout << "NUMBER: " << s << endl;

    return StreamDecorator::toString();
}
