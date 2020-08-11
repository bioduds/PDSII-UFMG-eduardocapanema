#include <iostream>
#include <ostream>

#define SIZE 5 

int main() {

    //std::cout << "Iniciando execução... Awesome Possum..." << std::endl;

    long value1 = 200000;
    long value2;
    unsigned int values[5] = {2, 4, 6, 8, 10};
    unsigned int* v_ptr = values;
    long* long_ptr = &value1; // 1 e 2
    
    //imprima o valor do objeto apontado por long_ptr
    std::cout << *long_ptr << std::endl;
    
    //Imprima o valor de value2
    value2 = *long_ptr;
    std::cout << value2 << std::endl;
    
    //Imprima o endereço de value1
    std::cout << &value1 << std::endl;
    
    //Imprima o endereço armazenado em long_ptr
    std::cout << long_ptr << std::endl;
    
    //Imprima a comparação entre o endereço de value1 com o endereço armazenado em long_ptr
    std::cout << (&value1 == long_ptr) << std::endl;
        
    //imprimir os elementos do array values usando notação de array subscrito.
    //std::cout << "size: " << sizeof(*values) << std::endl;
    for( int i=0; i<5; i++ ) {
        std::cout << values[i] << std::endl;
    }

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento.
    //int vS = *(&values + 1) - values;
    //std::cout << "size vS: " << vS << std::endl;
    for( int i=0; i<5; i++ ) {
        std::cout << *(values + i) << std::endl;
    }

    //imprimir os elementos do array values usando notação de array ponteiro/deslocamento com o nome de array como o ponteiro.
    //std::cout << "Ponteiro Deslocamento vptr" << std::endl;
    for( int i=0; i<5; i++ ) {
        std::cout << *(v_ptr + i) << std::endl;
    }
    
    //imprimir os elementos do array values utilizando subscritos no ponteiro para o array.
    //std::cout << "Ponteiro para Array - vS " << vS << std::endl;
    for( int i=0; i<5; i++ ) {
        std::cout << v_ptr[i] << std::endl;
    }
    
    //imprimir o quinto elemento de values utilizando a notação de subscrito de array,
    std::cout << values[4] << std::endl;
    
    //a notação de ponteiro/deslocamento com o nome de array como o ponteiro, 
    std::cout << *(values + 4) << std::endl;
    
    //a notação de subscrito de ponteiro,
    std::cout << v_ptr[4] << std::endl;
    
    //a notação de ponteiro/deslocamento.
    std::cout << *(v_ptr + 4) << std::endl;
    
    //imprimir a comparação entre o valor armazenado em (v_ptr-4) e values[0]
    std::cout << ( *(v_ptr-4) == values[0]) << std::endl;

    return 0;
}