# VPL 2 - Listas (5,0 pts)

### Disponível a partir de: domingo, 12 Jul 2020, 00:00

### Data de entrega: domingo, 20 Set 2020, 23:59

### Número máximo de arquivos: 5

### Tamanho máximo de arquivo carregado: 1 MiB

### Tipo de trabalho: Trabalho individual

**Neste exercício você deverá completar as classes List e Node. A classe List representa uma lista encadeada de inteiros. Cada elo dessa lista é uma instância da classe Node:**

```
class Node {
  private:
    const int _data;
    Node * _next;
  public:
    Node(int data, Node* next);
    void setData(int data);
    void setNext(Node *next);
    /** Returns the data stored in the node.
       @returns the integer stored in the node. 
     */
    int getData() const;
    /** Returns the next node.
     */
    Node* getNext() const;
};
```

Parte da implementação da classe list é dada abaixo:

```
class List {
  public:
    List();

    /** This function inserts an element in the head of the list.
     */
    void insert(int value);
    /** This function removes the head of the list, and returns the
       data stored there.
       @returns an integer that was stored in the head of the list.
     */
    int remove();
    /** This method indicates when the list is empty.
       @returns true if the list is empty, and false otherwise.
     */
    int isEmpty();
    /** Informs the number of elements in the list.
       @returns an integer n, where n is the number of nodes in the list.
     */
    unsigned size() const;
    /** Returns the element in the middle of the list.
       If the list has 2*n or 2*n+1 elements, then the middle element is
       the element at index n, assuming that the first index is zero.
       @returns the middle element of the list.
     */
    int middle() const;
    /** Returns the last element in the linked list.
       @returns the integer stored in the last element of the list.
     */
    int last() const;
    /** This method moves the head of the list to its last position.
       In other words, rotate() + last() == head.
     */
    void rotate();
  private:
    Node *head; ///< Pointer to the first element of the list.
};
```

**Você deverá completar todas as funções que possuem declaração mais não possuem corpo. Fique à vontade para criar funções auxiliares (e privadas) e atributos dentro das classes List e Node. Tenha em mente que o principal objetivo desse exercício é aplicar o princípio de encapsulamento. Você deve enviar os arquivos .cpp e .hpp para as classes List e Node e o arquivo main.cpp. Para testar sua implementação, utilize a função main abaixo:**

```
int main(int argc, char** argv) {
  int input;
  std::cin >> input;
  List *list = new List();
  while (input != 0) {
    list->insert(input);
    std::cin >> input;
  }
  std::cout << "s:" << list->size() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  std::cout << "r:" << list->remove() << ", ";
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << ", ";
  list.rotate();
  std::cout << "m:" << list->middle() << ", ";
  std::cout << "l:" << list->last() << std::endl;
  return 0;
}
```

### Atenção: O seu programa será avaliado automaticamente em relação a saída, e manualmente para o erro de memory leak utilizando o Valgrind. Alunos que não resolverem problemas relacionados a memory leak serão penalizados no valor da nota final. Utilize o botão 'Depurar' para acessar o GDB e visualizar a saída do Valgrind.

**Alguns exemplos de uso podem ser vistos logo abaixo:**

```
$ cat t0.txt
2 3 5 7 11 0
$ ./a.out < t0.txt
s:5, m:5, l:2, r:11, m:3, l:2, m:2, l:7

$ cat t1.txt
2 3 5 7 11 13 17 19 23 29 31 37 0
$ ./a.out < t1.txt
s:12, m:13, l:2, r:37, m:13, l:2, m:11, l:31

$ cat t2.txt
1 2 3 4 5 6 7 8 9 0
$ ./a.out < t2.txt 
s:9, m:5, l:1, r:9, m:4, l:1, m:3, l:8
```
