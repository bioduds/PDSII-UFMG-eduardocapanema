#include "List.hpp"

List::List() {
	_size = 0;
	_head = nullptr;
}

void List::insert( int value ) {
    Node* node = new Node;
	node->_value = value;
	node->_next = _head;
    _size += 1;
	_head = node;
}

void List::clearList() {
	_head = nullptr;
}

void List::print() {
	Node* head = _head;
	if( _size > 0 ) {
		while( head ) {
			std::cout << head->_value << " ";
			head = head->_next;
		}
		std::cout<<std::endl;
	}
	else {
	    std::cout << "-" << std::endl;
		return;
	}
}

void List::removeFirst() {
	Node* current = _head;
	_head = _head->_next;
    _size -= 1;
	delete current;
    return;
}

int List::indexOf( int value ) {
	if( _size > 0 ) {
		Node* head = _head;
		int index = 0;
		while( head && head->_value != value ) {
			index++;
			head = head->_next;
		}
		if( head->_value == value ) { return index; }
		return -1;
	}
	else {
		return -1;
	}
}

void List::remove( int value ) {
	if( _size == 0 ) { 
        clearList();
        return; 
    }
	else if( _head->_value == value ) {
		Node* current = _head;
		_head = _head->_next;
        _size -= 1;
        if( _size == 0) {
            clearList();
        }
        else { delete current; }
    	return;
	}
	else {
		Node* previous = _head;
		Node* current = _head->_next;
		while( current != nullptr ) {
			if( current->_value == value ) { break;	}
			else {
				previous = current;
				current = current->_next;
			}
		}
		if( current == nullptr ) { return; }
		else {
			previous->_next = current->_next;
            _size -= 1; 
            if( _size == 0) { clearList(); }
            else { 
                delete current; }
            if( _size == 0) { clearList(); }
		}
	}
}
