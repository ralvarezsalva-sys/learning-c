/* We create a function that takes all the parameters that the user puts into the array, but there are some brain signals
that are false, so we know that because it repeats 2 times every single time*/

#include <stdio.h>
#define MAX_SIZE 10

void askArray(int arr[], int sizeArray);
int giveArray(int arrOne[], int arrTwo[], int sizeArray); 
void printArray(int arr[], int sizeArray);

int main() {
    int sizeUser = 0;

    
    while(1) {          
        printf("Please, enter the number of integers that will contain the array (Maximum of 10): \n");
        if (scanf("%d", &sizeUser) == 1 && sizeUser > 0 && sizeUser <= MAX_SIZE) {
            while (getchar() != '\n');
            break;
        }        

        printf("Not a real integer, please enter from 1 to 10 \n");
        while (getchar() != '\n');
    }

    int originalArray[MAX_SIZE];
    int modifiedArray[MAX_SIZE];

    askArray(originalArray, sizeUser);

    
    int newSize = giveArray(originalArray, modifiedArray, sizeUser);

    
    printArray(modifiedArray, newSize);

    return 0;
}

void askArray(int arr[], int sizeArray) {
    
    for (int i = 0; i < sizeArray; i++) {
        while(1) {
            printf("Please, enter the integer number %d: \n", i + 1);  
            if (scanf("%d", &arr[i]) == 1) {
                while (getchar() != '\n');
                break;
            }  

            printf("Integer not valid, please enter a real number \n");
            while (getchar() != '\n');
        }
    }
}

int giveArray(int arrOne[], int arrTwo[], int sizeArray) {
    if (sizeArray <= 0) return 0;

    int j = 0; 

    
    arrTwo[j] = arrOne[0];
    j++;

    
    for (int i = 1; i < sizeArray; i++) {
        
        if (arrOne[i] != arrTwo[j - 1]) {
            arrTwo[j] = arrOne[i];
            j++; 
        }
    }

    return j; 
}

void printArray(int arr[], int sizeArray) {
    if (sizeArray == 0) {
        printf("New array = []\n");
        return;
    }

    printf("New array = [");
    for (int i = 0; i < sizeArray; i++) {
        printf("%d", arr[i]);
        if (i < sizeArray - 1) {
            printf(", "); 
        }
    }
    printf("]\n");
}