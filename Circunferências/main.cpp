#include "Circunferencia.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  double xc1, yc1, r1;
  cin >> xc1 >> yc1 >> r1;
  Circunferencia* circ1 = new Circunferencia(xc1, yc1, r1);
  
  double xc2, yc2, r2;
  cin >> xc2 >> yc2 >> r2;
  Circunferencia* circ2 = new Circunferencia(xc2, yc2, r2);
  
  cout << fixed << showpoint; 
  cout << setprecision(2);
  
  cout << circ1->calcularArea() << " " << circ1->possuiIntersecao(circ2) << endl;
  cout << circ2->calcularArea() << " " << circ2->possuiIntersecao(circ1) << endl;

  delete circ1;
  delete circ2;

  return 0;
}