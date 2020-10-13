#include <iostream>
#include "Handler.h"

void fer_assert( const bool expr, const char* msg ) {
  if( !expr ) {
    std::cout << msg << std::endl;
    exit(1);
  }
}

void HandlerAdd::handle( Instruction *inst ) {
  // TODO: implement this method. An answer 
  // is provided in the exercise.
  //std::cout << "Handling Add" << std::endl;
  fer_assert( !_stack->empty(), "Erro: poucos argumentos na pilha." );
  int v1 = _stack->top(); _stack->pop();
  fer_assert( !_stack->empty(), "Erro: poucos argumentos na pilha." );
  int v2 = _stack->top(); _stack->pop();
  _stack->push( v1 + v2 );
}

void HandlerMul::handle( Instruction *inst ) {
  // TODO: implement this method.
  //std::cout << "Handling Mul" << std::endl;
  fer_assert( !_stack->empty(), "Erro: poucos argumentos na pilha." );
  int v1 = _stack->top(); _stack->pop();
  fer_assert( !_stack->empty(), "Erro: poucos argumentos na pilha." );
  int v2 = _stack->top(); _stack->pop();
  _stack->push( v1 * v2 );
}

void HandlerPop::handle( Instruction *inst ) {
  // TODO: implement this method.
//   std::cout << "Handling Pop - size antes " << _stack->size() << std::endl;
//   std::cout << "Handling Pop - size depois " << _stack->size() << std::endl;
  fer_assert( !_stack->empty(), "Erro: poucos argumentos na pilha." );
  _stack->pop();
}

void HandlerPrint::handle( Instruction *inst ) {
  // TODO: implement this method.
  std::cout << _stack->top() << std::endl;
}

void HandlerPush::handle( Instruction *inst ) {
  // TODO: implement this method.
  _stack->push( inst->value );
  //std::cout << "Handling Push, stack: " << _stack->top() << std::endl;
}