#include <stdio.h>
#include <string.h>
#define MAX_NUMS 50

// This function will take an array of integers told by the user and will return the same integers ordered
   
int main() {
    int thelist[MAX_NUMS];
    int actual_num;
    int total_nums = 0; // Guardarà quants números ha posat l'usuari
    
    printf("You are going to enter all the numbers you want (max 50), once you send me something it isn't a number, that will mean you want to close.\n");

    // Bucle per demanar els números
    for (int i = 0; i < MAX_NUMS; i++) {
        printf("Diguem el num numero %d: ", i + 1);
        if (scanf("%d", &actual_num) == 1) {
            thelist[i] = actual_num;
            total_nums++; // Incrementem el comptador de números vàlids
            while (getchar() != '\n');
        } else {
            // L'usuari ha escrit una lletra o caràcter no vàlid
            while (getchar() != '\n');
            break; // Sortim del bucle de lectura
        }
    }

    // Ordenem el Array [86, 90, 34, 12, 7, 34, 76]
    // Fem un Bucle dins d'un altre bucle

    for (int i = 0; i < total_nums; i++) {
        for (int j = i + 1; j < total_nums; j++) {
            if (thelist[i] > thelist[j]) {
                int temp = thelist[i];
                thelist[i] = thelist[j];
                thelist[j] = temp;
            }
        }
    }
    
    for (int i = 0; i < total_nums; i++) {
        printf("- %d \n", thelist[i]);
    }
    return 0;
}
