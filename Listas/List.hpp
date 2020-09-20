/********************************/
#ifndef LIST_H
#define LIST_H
#include <string>
#include "Node.hpp"
using namespace std;
/********************************/

class List {

  private:

    Node *head; ///< Pointer to the first element of the list.

    void add_first( int n );
    void add_last( int n );
    void delete_particularposition( int pos );
    void delete_first();
    void delete_last();
    int display_particularposition( int n );
    void display_first();
    void display_last();
    void display_all();
  
  public:

    int _size;

    // Constructor
    List();

    /** This function inserts an element in the head of the list.
     */
    void insert( int value, int pos );
    /** This function removes the head of the list, and returns the
       data stored there.
       @returns an integer that was stored in the head of the list.
     */
    int remove();
    /** This method indicates when the list is empty.
       @returns true if the list is empty, and false otherwise.
     */
    int isEmpty();
    /** Informs the number of elements in the list.
       @returns an integer n, where n is the number of nodes in the list.
     */
    unsigned size();
    /** Returns the element in the middle of the list.
       If the list has 2*n or 2*n+1 elements, then the middle element is
       the element at index n, assuming that the first index is zero.
       @returns the middle element of the list.
     */
    int middle();
    /** Returns the last element in the linked list.
       @returns the integer stored in the last element of the list.
     */
    int last();
    /** This method moves the head of the list to its last position.
       In other words, rotate() + last() == head.
     */
    void rotate();
    
    // Destructor
    ~List();
};

#endif