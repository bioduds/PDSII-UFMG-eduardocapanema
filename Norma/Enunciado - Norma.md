# VPL3 - Norma multi-dimensional (5,0 pts)

* Disponível a partir de: domingo, 12 Jul 2020, 00:00

* Data de entrega: domingo, 20 Set 2020, 23:59

* Arquivos requeridos: Vec.hpp, Vec1D.hpp, Vec2D.hpp, main.cpp, Vec1D.cpp, Vec2D.cpp, Vec3D.cpp, Vec3D.hpp (Baixar)

* Tamanho máximo de arquivo carregado: 1 MiB

* Tipo de trabalho: Trabalho individual

**O objetivo deste exercício é implementar um sistema que lê pontos da entrada padrão, um por linha, e imprime a soma da norma dos vetores que esses pontos representam. A definição de norma que deve ser usada é a de Norma Euclidiana. Para testar seu programa, você deverá usar o programa principal abaixo:**

---
```
#include <stdio.h>
#include <vector>
#include <iostream>
#include <sstream>
#include "Vec.hpp"
#include "Vec1D.hpp"
#include "Vec2D.hpp"
#include "Vec3D.hpp"
Vec* readNextPoint(std::string line) {
  std::istringstream ss(line);
  std::string token;
  std::getline(ss, token, ' ');
  double x = stod(token);
  if (std::getline(ss, token, ' ')) {
    double y = stod(token);
    if (std::getline(ss, token, ' ')) {
      double z = stod(token);
      return new Vec3D(x, y, z);
    } else {
      return new Vec2D(x, y);
    }
  } else {
    return new Vec1D(x);
  }
}
int main() {
  // read the file
  std::vector<Vec*> vecs;
  std::string line;
  while (std::getline(std::cin, line)) {
    // Convert the line into a point, and push it onto the vector:
    vecs.push_back(readNextPoint(line));
  }
  // Get the sum of norms:
  double norm = 0.0;
  for (Vec* v: vecs) {
    norm += v->get_norm();
  }
  printf("%.2lf\n", norm);
  return 0;
}
```

**Neste exercício teremos vetores de uma, duas ou três dimensões. Todos os vetores devem obedecer à interface abaixo:**

```
class Vec {
  public:
    virtual ~Vec() {};
    virtual std::string to_string() const = 0;
    virtual double get_norm() const = 0;
};
```

**Você deverá implementar as classes que estendem essa interface, a saber, Vec1D, Vec2D e Vec3D. A definição de cada uma das classes será provida para você. Use os seguintes casos de teste neste exercício:**

```
$> X=0; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
0
1
2
3
--
6.00


$> X=1; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
0 0
--
0.00


$> X=2; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
1.0 0.0
0.0 1.0
--
2.00


$> X=3; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
1.0 1.0 1.0
--
1.73


$> X=4; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
0
1.2
1.1 2.3
-2.3 -5.4 10.11
-3.3 45.23
1.0 2.0 -3.5
3.4
2.76
--
71.10


$> X=5; cat t$X.txt ; echo "--" ;./a.out < t$X.txt
.0 .0 2.0
1.0 .0 .0
.0 3.0 .0
--
6.00
```

*Esse exercício ilustra o Princípio da Abertura-Fechamento, que diz que um programa deve ser aberto para extensão, e fechado para uso. Em outras palavras, é possível usar esse programa, porém, é também possível estendê-lo. A extensão se dá via herança. Mesmo após o programa já estar em produção, ainda é possível, por exemplo, criar pontos 4D ou 5D, sem que seja necessário alterar os outros tipos de pontos que já existem.*