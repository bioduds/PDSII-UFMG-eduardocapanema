/***************************/
#include <iostream>
#include "List.hpp"
using namespace std;
/***************************/

int main() {

    cout << "---- Time needs Space ----" << endl;

    List* list = new List();
    list->clearList();

    int n, k;
    scanf( "%d %d", &n, &k );

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

    for( int i=0; i<=list->_size; i++ ) {
        int v = list->indexOf( i );
        //cout << "Checando " << v << " i: " << i << endl;
        if( (v % 2) == 0 ) {
            list->remove( v );
        }
    }
    list->print();
    cout << list->_size << endl;

    // free memory
    delete list;

	return 0;
}