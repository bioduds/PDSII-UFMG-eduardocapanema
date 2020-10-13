/** Eduardo Capanema **/
#include <stack>
#include <iostream>
#include "Handler.h"
/***** 2020041515 *****/

Instruction* readNextInstruction() {
  std::string msg;
  if( std::cin >> msg ) {
    int value = 0;
    if( msg == "push" ) {
      std::cin >> value;
    }  
    //std::cout << "MSG: " << msg << " Value: " << value << std::endl;
    return new Instruction( msg, value );
  }
  return NULL;
}

int main() {
  std::stack< int > *stack = new std::stack< int >();
  Handler *handler = new HandlerAdd( NULL, stack );
  handler = new HandlerMul( handler, stack );
  handler = new HandlerPop( handler, stack );
  handler = new HandlerPrint( handler, stack );
  handler = new HandlerPush( handler, stack );
  Instruction *inst;
  while ( ( inst = readNextInstruction() ) ) {
    //std::cout << "Retornou: " << inst->msg << " with value: " << inst->value << std::endl;

    if( inst->msg == "pop" ) { 
      handler = new HandlerPop( handler, stack );
    } else if( inst->msg == "push" ) {
      handler = new HandlerPush( handler, stack );
    } else if( inst->msg == "add" ) {
      handler = new HandlerAdd( handler, stack );
    } else if( inst->msg == "mul" ) {
      handler = new HandlerMul( handler, stack );
    } else if( inst->msg == "print" ) {
      handler = new HandlerPrint( handler, stack );
    }
    handler->handle( inst );
    
    delete inst;
  }
  delete stack;
  delete handler;
  return 0;
}