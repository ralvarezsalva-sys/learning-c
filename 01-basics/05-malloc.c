#include <stdio.h>
#include <stdlib.h>

int askQuantity();
char* duplicateString(char *str);

int main() {
    int size = askQuantity();

    int *ptr = (int *) malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("No memory left \n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        *(ptr + i) = 4 - 2 * i + 8 + i;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    free(ptr);
    ptr = NULL;



    char original[] = "Hola C amb memòria dinàmica!";

    char *copia = duplicateString(original);

    if (copia != NULL) {
        printf("Original: %s\n", original);
        printf("Còpia:    %s\n", copia);

        // Alliberem la còpia quan ja no la necessitem
        free(copia);
        copia = NULL;

    return 0;
    }



}

int askQuantity() {
    int quant;
    while (1) {
        printf("Please tell me how many numbers are you going to store: \n");
        if (scanf("%d", &quant) == 1 && quant > 0) {
            while (getchar() != '\n');
            return quant;
        }

        printf("Not a real positive integer, please try again \n");
        while (getchar() != '\n');
    }
}

char* duplicateString(char *str) {
    // 1. Calcula la longitud de 'str' fent servir un punter caminant
    int lenght = 0;
    for (int i = lenght; *(str + i) != '\0'; i++) {
        lenght++;
    }


    
    // 2. Fes malloc de (longitud + 1) * sizeof(char)
    char *ptr = (char *) malloc((lenght + 1) * sizeof(char));

    // 3. Comprova NULL
    if (ptr == NULL) {
        printf("No RAM available \n");
        return NULL;
    }
    
    // 4. Copia caràcter a caràcter amb punters
    for (int i = 0; i < lenght; i++) {
        *(ptr + i) = *(str + i);
    }
    // 5. Posa el '\0' al final de la nova cadena
    *(ptr + lenght + 1) = '\0';
    // 6. Retorna el punter de la nova cadena
    return ptr;
}

