/********************************/
#ifndef LIST
#define LIST
#include <string>
using namespace std;
/********************************/

class List {

  private:

    Node *head; ///< Pointer to the first element of the list.
  
  public:

    List();
    /** This function inserts an element in the head of the list.
     */
    void insert(int value);
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
    unsigned size() const;
    /** Returns the element in the middle of the list.
       If the list has 2*n or 2*n+1 elements, then the middle element is
       the element at index n, assuming that the first index is zero.
       @returns the middle element of the list.
     */
    int middle() const;
    /** Returns the last element in the linked list.
       @returns the integer stored in the last element of the list.
     */
    int last() const;
    /** This method moves the head of the list to its last position.
       In other words, rotate() + last() == head.
     */
    void rotate();
    
};
