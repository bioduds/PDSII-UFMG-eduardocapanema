/***************************/
#include <iostream>
#include "List.hpp"
using namespace std;
/***************************/

int main() {

    //cout << "---- Time needs Space ----" << endl;

    List* list = new List();
    list->clearList();

    int n, k;
    scanf( "%d %d", &n, &k );

    if( n<0 ) { 
	    std::cout << "-" << std::endl;
	    std::cout << "0" << std::endl;
	    std::cout << "-" << std::endl;
	    std::cout << "0" << std::endl;
	    std::cout << "-" << std::endl;
	    std::cout << "0" << std::endl;
        return 0;
    }

    for( int i=0; i<=n; i++ ) {
        list->insert( i );
    }

    list->print();
    cout << list->_size << endl; 

    for( int i=0; i<k; i++ ) {
        list->removeFirst();
    }
    list->print();
    cout << list->_size << endl;

    for( int i=0; i<=1000; i++ ) {
        if( (i % 2) == 0 ) {
            list->remove( i );
        }
    }
    list->print();
    cout << list->_size << endl;

    // free memory
    delete list;

	return 0;
}