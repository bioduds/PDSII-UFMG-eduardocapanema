/** Eduardo Capanema **/
#include <iostream>
#include "RingArray.h"
/***** 2020041515 *****/

void fer_assert( const bool expr, const char* msg ) {
  if( expr ) {
    std::cout << msg << std::endl;
    exit( 1 );
  }
}

template< class T, unsigned N >
void RingArray<T, N>::add( T value ) {
  // TODO: implement this method.
  fer_assert( isFull(), "Erro: anel cheio." );
  buf[_last] = buf[_first];
  buf[_first] = value;
  _first++;
}

template< class T, unsigned N >
T RingArray<T, N>::get() {
  // TODO: implement this method.
  fer_assert( isEmpty(), "Erro: anel vazio." );
  _first--;
  return buf[_first];
}

template< class T, unsigned N >
bool RingArray< T, N >::isFull() const {
  // TODO: implement this method.
  return( _first == 8 );
}

template< class T, unsigned N >
bool RingArray< T, N >::isEmpty() const {
  // TODO: implement this method.
  return( _first == 0 );
}

template< class T >
void test_add_then_get() { // d OR s
  RingArray< T, 8 > r;
  T value;
  while( std::cin >> value ) {
    r.add( value );
  }
  while( !r.isEmpty() ) {
    std::cout << "not empty: " << r.get() << std::endl;
  }
}

template< class T >
void test_add_or_get() { // D or S
  RingArray< T, 8 > r;
  T value;
  char c;
  while( std::cin >> c ) {
    if( c == '+' ) {
      std::cin >> value;
      r.add( value );
    } else if( c == '-' ) {
      std::cout << r.get() << std::endl;
    } else {
      std::cout << "Invalid operation\n";
    }
  }
}

int main () {
  char data;
  while( std::cin >> data ) {
    switch( data ) {
      case 'd': test_add_then_get< double >(); break;
      case 's': test_add_then_get< std::string >(); break;
      case 'D': test_add_or_get< double >(); break;
      case 'S': test_add_or_get< std::string >(); break;
      default : std::cout << "Invalid type\n";
    }
  }
  return 0;
}