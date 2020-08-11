#include <iostream>
#include <ostream>

#define SIZE 5 

int main() {

    //std::cout << "Iniciando execução... Awesome Possum..." << std::endl;

    long value1 = 200000;
    long value2;
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};
    unsigned int* v_ptr = values;
    long* long_ptr = &value1; // 1 e 2
    
    //imprima o valor do objeto apontado por long_ptr
    std::cout << *long_ptr << " ";
    
    //Imprima o valor de value2
    value2 = *long_ptr;
    std::cout << value2 << " ";
    
    //Imprima o endereço de value1
    std::cout << &value1 << " ";
    
    //Imprima o endereço armazenado em long_ptr
    std::cout << long_ptr << " ";
    
    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    std::cout << (&value1 == long_ptr) << " ";
        
    //imprimir os elementos do array values usando notação de array subscrito.
    //std::cout << "size: " << sizeof(*values) << " ";
    for( int i=0; i<SIZE; i++ ) {
        std::cout << values[i] << " ";
    }

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    //int vS = *(&values + 1) - values;
    //std::cout << "size vS: " << vS << " ";
    for( int i=0; i<SIZE; i++ ) {
        std::cout << *(values + i) << " ";
    }

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    //std::cout << "Ponteiro Deslocamento vptr" << " ";
    for( int i=0; i<SIZE; i++ ) {
        std::cout << *(v_ptr + i) << " ";
    }
    
    //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    //std::cout << "Ponteiro para Array - vS " << vS << " ";
    for( int i=0; i<SIZE; i++ ) {
        std::cout << v_ptr[i] << " ";
    }
    
    //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    std::cout << values[4] << " ";
    
    //a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
    std::cout << *(values + 4) << " ";
    
    //a notação de subscrito de ponteiro,
    std::cout << v_ptr[4] << " ";
    
    //a notação de ponteiro/deslocamento.
    std::cout << *(v_ptr + 4) << " ";
    
    //imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
    
    std::cout << (v_ptr + 3) << " ";
    std::cout << *(v_ptr + 3) << " ";

    v_ptr = &values[4];
    std::cout << (v_ptr - 4) << " ";
    std::cout << *(v_ptr - 4) << std::endl;
    
    //std::cout << ( *(v_ptr-4) == values[0]) << std::endl;

    return 0;
}