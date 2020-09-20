/****************************/
#include "List.hpp"
#include "Node.hpp"
#include <iostream>
using namespace std;
/****************************/

List::List() {
  this->_size = 0;
  this->head = NULL;
}

void List::insert( int value, int pos=0 ) {
  Node *pre = new Node();
  Node *cur = new Node();
  Node *temp = new Node();  
  if( pos == 0 ) {
    temp->data = value;
    temp->next = this->head;
    this->head = temp;
  } else {
    cur = this->head;
    for( int i = 0; i < pos ; i++ ) {
      pre = cur;
      cur = cur->next;
    }
    temp->data = value;
    temp->next = cur;
    pre->next = temp;
  }
  this->_size++;
}

void List::add_first( int n ) {
  insert( n );
}

void List::add_last( int n ) {
  insert( n, this->_size );
}

void List::delete_particularposition( int pos ) {
  Node *pre = new Node();
  Node *cur = new Node();
  cur = this->head;

  if( pos == 0 ) {
    pre = this->head;
    head = head->next;
  } else {
    for( int i = 0; i<pos; i++ ) {
      pre = cur;
      cur = cur->next;
    }
    pre->next = cur->next;
  }
  this->_size--;
}

int List::remove() {
  delete_particularposition( 0 );
  return 0;
}

void List::delete_last() {
  delete_particularposition( this->_size - 1 );
}

void List::display_particularposition( int n ) {
  Node *new_node = this->head;
  for( int i = 0; i < n; i++ ) {
    new_node = new_node->next;
  }    
  cout << n << ": " << new_node->data << "\n";
}

void List::display_first() {
  display_particularposition( 0 );
}


void List::display_all() {
  Node *new_node = this->head;
  int i = 1;
  while( new_node ) {
    cout << i << ": " << new_node->data << "\n";
    new_node = new_node->next;
    i++;
  }
}

unsigned List::size() {
  return this->_size;
}

int List::middle() const {
  return this->_size;
}

int List::last() {
  display_particularposition( this->_size - 1 );
  return 0;
}

void List::rotate() {
  cout << "IMPLEMENT ROTATION" << endl;
}

// destructor implementation
List::~List() {
  cout << "List object was deleted from memory"  << "\n";
}

