#include "List.hpp"

List::List() {
	_size = 0;
	_head = NULL;
}

void List::insert( int value ) {
    Node* node;
	node->value = value;
	node->next = _head;
	_head = node;
}

void List::clearList() {
	_head = NULL;
}

void List::print() {
	Node* head = _head;
	if( _size > 0 ) {
		while( head ) {
			std::cout << head->value << " ";
			head = head->next;
		}
		std::cout<<std::endl;
	}
	else {
	    std::cout<<std::endl;
		return;
	}
}

int List::removeFirst() {
	Node* current = head;
	_head = _head->next;
	delete current;
	return current->value;
}

int List::indexOf( int value ) {
	if( _size > 0 ) {
		Node* head = _head;
		int index = 0;
		while( head && head->value != value ) {
			index++;
			head = head->next;
		}
		if( head->value == value ) { return index; }
		return -1;
	}
	else {
		return -1;
	}
}

void List::remove( int value ) {
	if( _size == 0 ) {
		return;
	}
	else if( _head->value == value ) {
		Node* current = head;
		_head = _head->next;
		delete current;
	}
	else {
		Node* previous = _head;
		Node* current = head->next;
		while( current != NULL ) {
			if( current->value == value ) {
				break;
			}
			else {
				previous = current;
				current = current->next;
			}
		}
		if( current == NULL ) {
			return;
		}
		else {
			previous->next = current->next;
			delete current;
		}
	}
}
