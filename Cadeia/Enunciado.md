# VPL - Cadeia de Responsabilidade (5,0 pts)

* Disponível a partir de: domingo, 12 Jul 2020, 00:00
* Data de entrega: terça, 13 Out 2020, 23:59
* Arquivos requeridos: main.cpp, Handler.h, Handler.cpp (Baixar)
* Tamanho máximo de arquivo carregado: 1 MiB
* Tipo de trabalho: Trabalho individual

**Neste exercício aprenderemos sobre mais um padrão de projetos: a Cadeia de Responsabilidade, ou Chain of Responsibility (CR), como originalmente chamado. Uma CR é um padrão bem parecido com o Decorator, que já vimos em um exercício anterior. Porém, em vez de todos os objetos da cadeia realizarem uma ação sobre o dado, na CR, somente um objeto perfaz tal ação.**

**Neste exercício, nós implementaremos um pequeno interpretador de instruções. Esse interpretador manipula uma máquina virtual de pilha. Essa máquina virtual é como um computador, porém, toda a memória que ela usa é uma pilha. As instruções permitem manipular os dados no topo da pilha. Nossa máquina reconhecerá somente cinco instruções:**

* pop: remove o dado no topo da pilha.
* push n: coloca o valor 'n' no topo da pilha.
* add: adiciona os dois valores no topo da pilha, remove-os, e coloca o valor resultante no topo da pilha.
* mul: multiplica os dois valores no topo da pilha, remove-os, e coloca o valor resultante no topo da pilha.
* print: imprime na saída padrão o valor no topo da pilha.

**Para testar seu programa, utilize a função de teste abaixo:**

```
#include <stack>
#include <iostream>
#include "Handler.h"
Instruction* readNextInstruction() {
  std::string msg;
  if (std::cin >> msg) {
    int value = 0;
    if (msg == "push") {
      std::cin >> value;
    }
    return new Instruction(msg, value);
  }
  return NULL;
}
int main() {
  std::stack<int> *stack = new std::stack<int>();
  Handler *handler = new HandlerAdd(NULL, stack);
  handler = new HandlerMul(handler, stack);
  handler = new HandlerPop(handler, stack);
  handler = new HandlerPrint(handler, stack);
  handler = new HandlerPush(handler, stack);
  Instruction *inst;
  while ((inst = readNextInstruction())) {
    handler->handle(inst);
    delete inst;
  }
  delete stack;
  delete handler;
  return 0;
}
```

Sua tarefa, neste exercício, será completar a implementação dos "Manipuladores de Instrução" (handlers). Um modelo descrevendo a estrutura de manipuladores pode ser vista abaixo:

Chain of Responsibility

As declarações de todas as funções já estão feitas para você. Você terá tão somente que implementar as funções handle de cada manipulador. A título de exemplo, abaixo pode ser vista a implementação da função handle da classe HandlerAdd:

```
void HandlerAdd::handle(Instruction *inst) {
  if (inst->msg.compare("add") == 0) {
    fer_assert(_stack->size() >= 2, "Erro: poucos argumentos na pilha.");
    const int v1 = _stack->top();
    _stack->pop();
    const int v2 = _stack->top();
    _stack->pop();
    const int vv = v1 + v2;
    _stack->push(vv);
  } else {
    fer_assert(_next != NULL, "Erro: comando desconhecido.");
    _next->handle(inst);
  }
}
```

Note que estamos realizando o tratamento de erro com a função fer_assert. Essa função é mostrada logo abaixo:

```
void fer_assert(const bool expr, const char* msg) {
  if (!expr) {
    std::cout << msg << std::endl;
    exit(1);
  }
}
```

Você pode usar qualquer outra função para realizar o tratamento de erro. Contudo, você deve imprimir mensagens de erro na saída padrão, não na saída de erro, para que a correção automática possa funcionar. Caso um erro aconteça, seu programa deve imprimir uma mensagem, e então interromper o programa. Os dois tipos de mensagem de erro possíveis são (Lembre-se de imprimir um ponto no final da mensagem de erro):

Erro: poucos argumentos na pilha. Essa mensagem é disparada quando a pilha não contém argumentos suficientes para a realização de alguma operação.
Erro: comando desconhecido. Essa mensagem é disparada quando não existe nenhum manipulador para tratar um determinado tipo de instrução.

A declaração dos manipuladores e da classe de instrução está disponível em um dos arquivos que fazem parte do trabalho: Handler.h. Abaixo são dados alguns testes. Procure usá-los como exemplo para entender o funcionamento da máquina de pilha:

```
=== input ===
push 13
push 29
add
print
pop
=== output ===
42

=== input ===
push 2
push 2
mul
print
push 2
mul
print
push 2
mul
print
push 2
mul
print
=== output ===
4
8
16
32

=== input ===
push 2
push 3
push 4
push 5
mul
print
mul
print
mul
print
=== output ===
20
60
120

=== input ===
push 2
print
push 3
print
pop
add
=== output ===
2
3
Erro: poucos argumentos na pilha.

=== input ===
push 2
print
push 3
print
add
print
=== output ===
2
3
5
```
---
Arquivos requeridos
main.cpp, Handler.h, Handler.cpp
