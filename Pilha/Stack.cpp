
#include <iostream>
#include "Stack.h"


struct Node {
    unsigned elem;
    Node* next;
};

Stack::Stack() {
    // TODO.
    _top = nullptr;
    _count = 0;
}

void Stack::push( unsigned elem ) {
    // TODO.
    Node *tmp = new Node; // pointer tmp points to the new SNode
    tmp->elem = elem; // place element X in the el field of SNode
    tmp->next = _top; // make the next pointer of the new SNode
        // point to where the TopOfStack points i.e.,
        // it points to the old first element (old top of stack)
    _top = tmp; // Point TopOfStack to the new SNode added
    _count++;
}

bool Stack::empty() {
    return _top == NULL;
}

void Stack::pop() {
    if( empty() ) {
        throw Stack::EmptyException();
        try {
            throw Stack::EmptyException();
        } catch( Stack::EmptyException& e ) {
            std::cout << "MyException caught" << std::endl;
            //std::cout << e.what() << std::endl;
        } catch( std::exception& e ) {}

    } else {
        // TODO.
        Node *tmp = _top; // pointer tmp points to the Top of the stack
        _top = _top->next; // point TopOfStack to the second element in the stack
        delete tmp; // delete the node pointed to by tmp i.e., the old top of stack.
        _count--;

    }
}

unsigned Stack::top() {
    
    if( empty() ) {
        throw Stack::EmptyException();        
        try {
            throw Stack::EmptyException();
        } catch( Stack::EmptyException& e ) {
            std::cout << "MyException caught" << std::endl;
            //std::cout << e.what() << std::endl;
        } catch( std::exception& e ) {}

    } else { 
        return _top->elem;
    }
    return 0;  // TODO.
}

unsigned Stack::count() const {
    return _count;  // TODO.
}

void Stack::Clear() {
    // do clearout
    while( !empty() ) { pop(); }
}

// Stack::EmptyException : public std::exception {
// }


