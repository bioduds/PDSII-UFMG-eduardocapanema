/********************************/
#include <iostream>
#include "List.hpp"
using namespace std;
/********************************/

int main( int argc, char** argv ) {

  int input;

  cin >> input;
  List *list = new List();

  while( input != 0 ) {
    list->insert( input, 0 );
    cin >> input;
  }

  cout << "s:" << list->size() << ", ";
  cout << "m:" << list->middle() << ", ";
  cout << "l:" << list->last() << ", ";
  cout << "r:" << list->remove() << ", ";
  cout << "m:" << list->middle() << ", ";
  cout << "l:" << list->last() << ", ";
  
  list->rotate();
  
  cout << "m:" << list->middle() << ", ";
  cout << "l:" << list->last() << endl;
  
  return 0;

}