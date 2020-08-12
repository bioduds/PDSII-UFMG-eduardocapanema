#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstdlib>

struct Node {
	int _value;
	Node* _next;
};

struct List {

    // Atributos
	Node* _head;
	int _size;

    // Construtor
	List();

    // Métodos
	void insert( int value );
	void remove( int value );
	void print();
	void clearList();
	int removeFirst();
	int indexOf( int value );
    
};

#endif