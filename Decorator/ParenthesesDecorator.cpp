/***********************************/
#include <iostream>
#include "ParenthesesDecorator.hpp"
using namespace std;
/***********************************/

string ParenthesesDecorator::toString() {

    string s = StreamDecorator::toString();
    cout << "PARENTHESIS: " << s << endl;

    return "( " + StreamDecorator::toString() + " )";
}
