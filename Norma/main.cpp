// Aluno: Eduardo Capanema (eduardocapanema@ufmg.br) Mat. 2020041515
/*******************************/
#include <stdio.h>
#include <vector>
#include <iostream>
#include <sstream>
#include "Vec.hpp"
#include "Vec1D.hpp"
#include "Vec2D.hpp"
#include "Vec3D.hpp"
using namespace std;
/*******************************/

Vec* readNextPoint( string line ) {
  istringstream ss( line );
  string token;
  getline( ss, token, ' ' );
  double x = stod( token );
  if( getline( ss, token, ' ' ) ) {
    double y = stod( token );
    if( getline( ss, token, ' ' ) ) {
      double z = stod( token );
      return new Vec3D( x, y, z );
    } else {
      return new Vec2D( x, y );
    }
  } else {
    return new Vec1D( x );
  }
}

int main() {
  // read the file
  vector<Vec*> vecs;
  string line;
  while( getline( cin, line ) ) {
    // Convert the line into a point, and push it onto the vector:
    vecs.push_back( readNextPoint( line ) );
  }
  // Get the sum of norms:
  double norm = 0.0;
  for( Vec* v:vecs ) {
    norm += v->get_norm();
  }
  printf( "%.2lf\n", norm );
  return 0;
}
