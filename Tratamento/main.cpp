#include <iostream>
#include <exception>


// class myexception : public exception {
//   virtual const char* what() const throw() {
//     return "My exception happened";
//   }
// } myex;

class E1 : public std::exception {};
class E2 : public std::exception {};
class E3 : public std::exception {};

template< class T, int N > class BoundedArray {
  
  public :
    void set( int index, T value ) {
        buf[index] = value;
    }
    T get( int index ) {
        return buf[index];
    }

  private:
    T buf[N];

};

template< class T > void testArray() {
  BoundedArray< T, 8 > a;

  for( int i=0; i<8; i++ ) {
      a.set( i, 0 );
  }

  char action;
  while( std::cin >> action ) {
    int index;
    std::cin >> index;
    try {
        //throw E1();
      if( action == 's' ) {
        T value;
        std::cin >> value;
        a.set( index, value );
      } else if( action == 'g' ) {
          BoundedArray< T, 8 > check;
          check.set( 0, 0 );
          if( index == 0 ) {
              throw E1();
          }
          if( index < 0 ) {
              throw E2();
          }
          if( check.get( 0 ) == a.get( index ) ) {
              throw E3();
          }
          std::cout << a.get( index ) << std::endl;
      }
    } catch( const E1& e ) {
        std::cout << "Erro: indice nao inicializado." << std::endl;
    } catch( const E2& e ) {
        std::cout << "Erro: indice negativo." << std::endl;
    } catch( const E3& e ) {
        std::cout << "Erro: indice maior que arranjo." << std::endl;
    }
  }
}

int main() {
  char type;
  std::cin >> type;
  switch( type ) {
    case 'd' : testArray< double >(); break;
    case 'i' : testArray< int >(); break;
    case 's' : testArray< std::string >(); break;
  }
  return 0;
}