/* Eduardo Capanema */
#include <iostream>
#include "GetMax.h"
/**** 2020041515 ****/

BitSet* readBitSet() {
  unsigned set;
  std::cin >> set;
  return new BitSet( set );
}

Interval* readInterval() {
  int left, right;
  std::cin >> left >> right;
  return new Interval( left, right );
}

void testBitSet() {
  BitSet *b1 = readBitSet();
  BitSet *b2 = readBitSet();
  BitSet *dflt = new BitSet( 0 );
  std::cout << GetMaxDefault<BitSet>( *b1, *b2, *dflt ) << std::endl;
  delete b1;
  delete b2;
}

void testInterval() {
  Interval *i1 = readInterval();
  Interval *i2 = readInterval();
  Interval *dflt = new Interval( 0, 0 );
  std::cout << GetMaxDefault<Interval>( *i1, *i2, *dflt ) << std::endl;
  delete i1;
  delete i2;
}

int main() {
  char data;
  while( std::cin >> data ) {
    switch( data ) {
      case 'i' : testInterval();
    	break;
      case 'b' : testBitSet();
        break;
      default : std::cerr << "Invalid type\n";
    }
  }
  return 0;
}