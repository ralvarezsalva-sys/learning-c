#include <stdio.h>
#include <stdlib.h>

int* askNumbers(int *sizeA);

int main() {
    int sizeArray;
    int *ptr = askNumbers(&sizeArray);

    // Control de seguretat a main
    if (ptr == NULL) {
        printf("Error en la reserva de memòria.\n");
        return 1;
    }

    printf("\nArray resultant: ");
    for (int i = 0; i < sizeArray; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);
    ptr = NULL;

    return 0;
}

int* askNumbers(int *sizeA) {
    int number;
    int size = 0;
    int capacity = 2;

    int *arr = (int *) malloc(capacity * sizeof(int));
    if (arr == NULL) return NULL; // Control d'error inicial

    while (1) {
        printf("Please enter a real number, once you enter 0, you will finish entering your array:\n");
        if (scanf("%d", &number) == 1) {
            if (number == 0) {
                while (getchar() != '\n');
                break;
            }

            // 1. Redimensionem NOMÉS si està ple
            if (size == capacity) {
                int newCapacity = capacity * 2;
                int *temp = (int *) realloc(arr, newCapacity * sizeof(int));
                
                if (temp == NULL) {
                    printf("Error de memòria en ampliar!\n");
                    free(arr);
                    return NULL;
                }

                printf("We modified the RAM from %ld to %ld bytes\n", 
                       capacity * sizeof(int), newCapacity * sizeof(int));

                capacity = newCapacity;
                arr = temp; // Actualitzem la direcció de memòria
            }

            // 2. Inserció única (serveix tant per a la capacitat inicial com per la nova)
            *(arr + size) = number;
            size++;
        }
        else {
            printf("Please, that's not a real number \n");
            while (getchar() != '\n');
        }
    }

    *sizeA = size;
    return arr;
}