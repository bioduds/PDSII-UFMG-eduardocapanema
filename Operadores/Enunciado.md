# VPL - Sobre-escrita de Operadores (5,0 pts)

* Disponível a partir de: domingo, 12 Jul 2020, 00:00
* Data de entrega: terça, 13 Out 2020, 23:59
* Arquivos requeridos: main.cpp, Point.h, Point.cpp (Baixar)
* Tamanho máximo de arquivo carregado: 1 MiB
* Tipo de trabalho: Trabalho individual

**Neste exercício você deverá implementar quatro operadores sobre a class Point, cuja declaração pode ser vista logo abaixo:**

```
class Point {
  public:
    Point(double xx = 0, double yy = 0): x(xx), y(yy) {}
    double getX() const { return x; }
    double getY() const { return y; }
  private:
    double x;
    double y;
}
```

Os quatro operadores que precisam ser implementados são:

* O operador de leitura de stream <<
* O operador de escrita de stream >>
* O operador de adição +
* O operador de atribuição com adição +=

A declaração de tais operadores pode ser vista logo abaixo:

```
class Point {
  public:
    ...
    friend std::ostream & operator << (std::ostream &out, const Point &c);
    friend std::istream & operator >> (std::istream &in,  Point &c);
    Point operator + (const Point &p);
    Point& operator += (const Point &p);
    ...
};
```

Use a função main abaixo para testar sua implementação:

```
#include <vector>
#include <iostream>
#include "Point.h"
void readPoints(std::vector<Point> &vec) {
  Point p;
  while (std::cin >> p) {
    vec.push_back(p);
  }
}
void printPoints(std::vector<Point> &vec) {
  for (Point p: vec) {
    std::cout << p << " ";
  }
  std::cout << std::endl;
}
Point sumAssPoints(std::vector<Point> &vec) {
  Point pSum;
  for (Point p: vec) {
    pSum += p;
  }
  return pSum;
}
Point sumBinPoints(std::vector<Point> &vec) {
  Point pSum;
  for (Point p: vec) {
    pSum = pSum + p;
  }
  return pSum;
}
int main() {
  std::vector<Point> vec;
  char testCase;
  std::cin >> testCase;
  readPoints(vec);
  if (testCase == 'a') {
    std::cout << "Sum = " << sumAssPoints(vec) << std::endl;
  } else if (testCase == 'b') {
    std::cout << "Sum = " << sumBinPoints(vec) << std::endl;
  }
  printPoints(vec);
}
```

Abaixo são mostrados alguns testes que você pode usar como exemplo:

```
input
a
2.0 3.1
-1.0 4.0
-1.5 -2.3
2.5 -1.2
output
Sum = (2, 3.6)
(2, 3.1) (-1, 4) (-1.5, -2.3) (2.5, -1.2)

input
b
1.0 3.0
-2.0 -1.0
output
Sum = (-1, 2)
(1, 3) (-2, -1)

input
p
2 3
-2 4
1 5.5
-3 -1
output
(2, 3) (-2, 4) (1, 5.5) (-3, -1)
```

---
Arquivos requeridos
main.cpp, Point.h, Point.cpp
