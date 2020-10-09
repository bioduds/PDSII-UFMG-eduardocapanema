// Aluno: Eduardo Capanema (eduardocapanema@ufmg.br) Mat. 2020041515
/**********************************/
#include <iostream>
#include "ConcreteStream.hpp"
#include "ParenthesesDecorator.hpp"
#include "CommaDecorator.hpp"
#include "NumberDecorator.hpp"
using namespace std;
/**********************************/

AbstractStream* buildThreeBadFormat( string stream ) {
  AbstractStream* abs = new ConcreteStream( stream );
  abs = new ParenthesesDecorator( abs );
  abs = new CommaDecorator( abs );
  return new NumberDecorator( abs );
}

AbstractStream* buildThreeGoodFormat( string stream ) {
  AbstractStream* abs = new ConcreteStream( stream );
  abs = new NumberDecorator( abs );
  abs = new CommaDecorator( abs );
  return new ParenthesesDecorator( abs );
}

AbstractStream* buildParentheses( string stream ) {
  AbstractStream* abs = new ConcreteStream( stream );
  return new ParenthesesDecorator( abs );
}

AbstractStream* buildCommas( string stream ) {
  AbstractStream* abs = new ConcreteStream( stream );
  return new CommaDecorator( abs );
}

AbstractStream* buildIntegers( string stream ) {
  AbstractStream* abs = new ConcreteStream( stream );
  return new NumberDecorator( abs );
}

int main() {
  string stream;
  getline( cin, stream );
  cout << buildThreeBadFormat( stream )->toString() << endl;
  cout << buildThreeGoodFormat( stream )->toString() << endl;
  cout << buildParentheses( stream )->toString() << endl;
  cout << buildCommas( stream )->toString() << endl;
  cout << buildIntegers( stream )->toString() << endl;
}