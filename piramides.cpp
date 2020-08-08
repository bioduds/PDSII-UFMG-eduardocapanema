#include "iostream"

int main() {
    
    int n;
    std::cin >> n;
    int i = 0;

    do {
        for( int a=0; a<i; a++ ) {
            std::cout << "*";
        }
        std::cout << std::endl;
        i++;
    } while( i<n );

    do {
        for( int b=i; b>0; b-- ) {
            std::cout << "*";
        }
        std::cout << std::endl;
        i--;
    } while( i>0 );

    return 0;
}
