#include <stdio.h>

void increment(int *num);

int main() {
    int x = 10;

    printf("Valor de x abans de la funcio: %d\n", x);
    printf("Adreça de memòria de x: %p\n", (void*)&x); // El %p serveix per imprimir adreces

    // Passem l'ADREÇA de x utilitzant l'operador '&'
    increment(&x);

    printf("Valor de x despres de la funcio: %d\n", x);

    return 0;
}

void increment(int *num) {
    // 'num' conté l'adreça de x. 
    // Amb '*num' accedim a la variable original i li sumem 1.
    (*num)++; 
}