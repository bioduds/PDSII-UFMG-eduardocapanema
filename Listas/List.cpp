/****************************/
#include "List.hpp"
#include "Node.hpp"
#include <iostream>
using namespace std;
/****************************/

List::List() {
  this->_size = 0;
  this->head = nullptr;
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
  int sData = display_particularposition( 0 );
  delete_particularposition( 0 );
  return sData;
}

void List::delete_last() {
  delete_particularposition( this->_size - 1 );
}

int List::display_particularposition( int n ) {
  Node *new_node = this->head;
  for( int i = 0; i < n; i++ ) {
    new_node = new_node->next;
  }    
  //cout << endl << "Position " << n << ": " << new_node->data << endl;
  //cout << new_node->data;
  return new_node->data;
}

void List::display_first() {
  display_particularposition( 0 );
}


void List::display_all() {
  Node *new_node = this->head;
  int i = 1;
  //cout << endl;
  while( new_node ) {
    //cout << "at pos: " << i << ": " << new_node->data << endl;
    new_node = new_node->next;
    i++;
  }
}

unsigned List::size() {
  return this->_size;
}

int List::middle() {
  display_all();
  int m = (this->_size)/2;
  return display_particularposition( m );
}

int List::last() {
  return display_particularposition( this->_size - 1 );
}

void List::rotate() {
  // get first
  int first = display_particularposition( 0 );
  // delete first
  remove();
  // insert first at last
  insert( first, this->_size );
  // return display_particularposition( this->_size - 1 );
}


