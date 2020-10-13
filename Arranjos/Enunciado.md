# VPL - Arranjos Circulares (5,0 pts)

* Disponível a partir de: domingo, 12 Jul 2020, 00:00
* Data de entrega: terça, 13 Out 2020, 23:59
* Arquivos requeridos: RingArray.h, main.cpp (Baixar)
* Tamanho máximo de arquivo carregado: 1 MiB
* Tipo de trabalho: Trabalho individual

**Neste exercício você deverá implementar um arranjo circular. Um arranjo circular é uma estrutura de dados com capacidade finita, e duas operações, add e get. A primeira operação adiciona um elemento ao arranjo, e a segunda retorna o mais antigo elemento inserido nele. Use a declaração abaixo para entender como funciona essa estrutura de dados:**

```
#ifndef RING_ARRAY_H
#define RING_ARRAY_H

/**
 * \brief this class represents a ring array, that is, a circular array. The
 * array has a fixed capacity, and it is possible to insert elements in it
 * until it becomes full. Any attempt to insert more elements in a filled array
 * will abort the program.
 */
template <class T, unsigned N> class RingArray {
  public:
    RingArray(): _first(0), _last(0) {}
    /**
     * \brief This method adds a new value into the array. If the array is full,     * then this method stops the program. After inserting an element in the
     * array, the number of elements stored there increases by one.
     * \param value the element that must be inserted.
     */
    void add(T value);

    /**
     * \brief This method returns the oldest element stored in the array. After
     * returning an element, that element is removed from the array. Thus, the
     * number of elements in the array decreases by one. If we try to retrieve
     * an element from an empty array, then this method aborts the program.
     */
    T get();

    /**
     * This method is true if the array contains N-1 elements.
     * \return true if the array contains N-1 elements.
     */
    bool isFull() const;

    /**
     * This method is true if the array contains zero elements.
     * \return true if the array is empty.
     */
    bool isEmpty() const;

  private:
    unsigned _first; ///< The index of the oldest element in the array.
    unsigned _last; ///< The index of the next empty spot in the array.
    T buf[N]; ///< The buffer that stores the data in the array.
};

#endif
```

Para testar seu programa, utilize o arquivo de testes abaixo. Note que a parte de leitura de dados já está definida. Tudo o que você precisa fazer é prover implementações para os métodos da classe RingArray. Lembre-se que sua implementação precisa tratar situações de erro. Você pode usar a função fer_assert, que está implementada para você. Caso prefira usar outra função, não imprima mensagens de erro na saída de erro (err), ou o sistema de avaliação não vai conseguir capturá-las:

```
#include <iostream>
#include "RingArray.h"
void fer_assert(const bool expr, const char* msg) {
  if (!expr) {
    std::cout << msg << std::endl;
    exit(1);
  }
}
template <class T, unsigned N> void RingArray<T, N>::add(T value) {
  // TODO: implement this method.
}
template <class T, unsigned N> T RingArray<T, N>::get() {
  // TODO: implement this method.
}
template <class T, unsigned N> bool RingArray<T, N>::isFull() const {
  // TODO: implement this method.
}
template <class T, unsigned N> bool RingArray<T, N>::isEmpty() const {
  // TODO: implement this method.
}
template <class T>
void test_add_then_get() {
  RingArray<T, 8> r;
  T value;
  while (std::cin >> value) {
    r.add(value);
  }
  while (!r.isEmpty()) {
    std::cout << r.get() << std::endl;
  }
}
template <class T>
void test_add_or_get() {
  RingArray<T, 8> r;
  T value;
  char c;
  while (std::cin >> c) {
    if (c == '+') {
      std::cin >> value;
      r.add(value);
    } else if (c == '-') {
      std::cout << r.get() << std::endl;
    } else {
      std::cout << "Invalid operation\n";
    }
  }
}
int main () {
  char data;
  while (std::cin >> data) {
    switch (data) {
      case 'd': test_add_then_get<double>();
                break;
      case 's': test_add_then_get<std::string>();
                break;
      case 'D': test_add_or_get<double>();
                break;
      case 'S': test_add_or_get<std::string>();
                break;
      default: std::cout << "Invalid type\n";
    }
  }
  return 0;
}
```

Abaixo são mostrados alguns exemplos de testes. Seu programa deve produzir as mesmas saídas que esses exemplos. Não se preocupe em ler a entrada, pois isso já é feito pelo programa de testes:

```
$ X=0; echo "s o mar e ana, mariana" > t$X.txt ; ./a.out < t$X.txt
o
mar
e
ana,
mariana


$> X=1; echo "d 1.0 2.3 2.1 -23.5" > t$X.txt ; ./a.out < t$X.txt
1
2.3
2.1
-23.5


$> X=2; echo "s a b c d e f g h" > t$X.txt ; ./a.out < t$X.txt
Erro: anel cheio.


$> X=3; echo "D + 1.0 + 2.0 + 3.0 + 4.0 - + 5.0 + 6.0 + 7.0 - - - - - + 8.0 - -" > t$X.txt ; ./a.out < t$X.txt
1
2
3
4
5
6
7
8


$> X=4; echo "D + 1.0 - -" > t$X.txt ; ./a.out < t$X.txt
1
Erro: anel vazio.
```
---
Arquivos requeridos
RingArray.h, main.cpp
