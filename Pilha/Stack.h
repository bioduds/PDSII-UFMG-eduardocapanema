#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <exception>

struct Node;


// Pilha de números inteiros.
class Stack {

  public :
    // Representa uma exceção que ocorre quando a pilha está vazia.
    class EmptyException : public std::exception {
        // const char * what () const throw () {
        //     return "C++ Exception";
        // }

    };

    // Constrói uma pilha vazia.
    Stack();
    
    // Insere um elemento no topo da pilha.
    void push( unsigned elem );
    
    // Retorna o elemento no topo da pilha.
    // Lança EmptyException caso a pilha esteja vazia.
    unsigned top();

    // Remove o elemento no topo da pilha.
    // Lança EmptyException caso a pilha esteja vazia.
    void pop(); 
    
    // Retorna o número de elementos na pilha.
    unsigned count() const;

    bool empty();

    void Clear();

    ~Stack( ) { Clear(); }

  private:
    Node* _top;
    unsigned _count;
};

#endif