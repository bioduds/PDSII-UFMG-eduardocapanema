/****************************/
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include "CommaDecorator.hpp"
using namespace std;
/****************************/

string CommaDecorator::toString() {

    string s = StreamDecorator::toString();
    cout << "COMMA: " << s << endl;

    return StreamDecorator::toString();
}

