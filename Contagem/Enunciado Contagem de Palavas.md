# VPL 1 - Contagem de Palavras (5,0 pts)

### Disponível a partir de: domingo, 12 Jul 2020, 00:00

### Data de entrega: domingo, 20 Set 2020, 23:59

### Arquivos requeridos: main.cpp, WordCounter.hpp, WordCounter.cpp, Word.hpp, Word.cpp (Baixar)

### Tamanho máximo de arquivo carregado: 1 MiB

### Tipo de trabalho: Trabalho individual

**Escreva um programa para contar a frequência de palavras em um texto. Seu programa deve usar a função main abaixo para ler a entrada padrão, e imprimir resultados:**

```
int main() {

  WordCounter *wc = new WordCounter(100);
  string s;
  cin >> s;
  while (s != ".") {
    wc->addWord(s);
    cin >> s;
  }
  wc->print();

  return 0;
}
```

Para facilitar seu trabalho, a implementação da classe WordCounter segue abaixo. Para terminar esse exercício, você precisa completar os arquivos WordCounter.hpp e WordCounter.cpp. O construtor já está implementado.  Você deve implementar os métodos que estão faltando (addWord(), print() e ~WordCounter()). A saída do problema corresponde a lista de palavras e suas frequências. As frequências e as palavras devem ser separadas por um único espaço em branco (" "). Além disso, as palavras devem ser apresentadas em ordem alfabética.

Note que a classe WordCounter utiliza a classe Word, que também já está implementada para você. O principal objetivo desse exercício é observar a comunicação entre objetos de diferentes classes. Você pode incluir novos métodos e atributos nas classes WordCounter e Word se julgar necessário.

```
#ifndef WORDCOUNT
#define WORDCOUNT
#include <map>
#include <vector>
#include <iostream>
#include <string>
#include "Word.hpp"
using namespace std;

class WordCounter {
  public:

	Word *words;
	int size = 0;

	WordCounter(int num_words);

	~WordCounter();

	void addWord(string w);

	void print() const;

};

#endif
```

Alguns exemplos de uso podem ser vistos logo abaixo:

```
$ cat t0.txt
uma frase outra frase mais uma frase .
$ ./a.out < t0.txt 
frase 3
mais 1
outra 1
uma 2

$ cat t1.txt
a a a b c a b b c a a b a a b c .
$ ./a.out < t2.txt 
a 8
b 5
c 3

$ cat t2.txt
1 2 3 4 2 1 4 3 2 1 .
$ ./a.out < t2.txt 
1 3
2 3
3 2
4 2
```

***Atenção: você deve enviar os arquivos main.cpp, WordCounter.hpp, WordCounter.cpp, Word.hpp e Word.cpp.***