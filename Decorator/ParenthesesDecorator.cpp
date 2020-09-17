/***********************************/
#include <iostream>
#include "ParenthesesDecorator.hpp"
using namespace std;
/***********************************/

string ParenthesesDecorator::toString() {
  return "( " + StreamDecorator::toString() + " )";
}
