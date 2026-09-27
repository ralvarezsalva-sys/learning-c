#define MAX_NUMS 5
#include <stdio.h>

void increment(int *num);
void swapValues(int *a, int *b);
int getMax(int *arr, int size, int *maxResult);
void reverseArray(int *arr, int size);
void getMinAndMax(int *arr, int size, int *minNum, int *maxNum);
int* findNum(int *arr, int size, int number);

int main() {
    int x = 10;

    printf("Valor de x abans de la funcio: %d\n", x);
    printf("Adreça de memòria de x: %p\n", (void*)&x); // El %p serveix per imprimir adreces

    // Passem l'ADREÇA de x utilitzant l'operador '&'
    increment(&x);

    printf("Valor de x despres de la funcio: %d\n", x);

    int y = 23;

    swapValues(&x, &y);
    printf("X = %d \nY = %d \n", x, y);
    
    int array[MAX_NUMS] = {6, 2, 3, 8, 9};
    int maxNum;

    maxNum = getMax(array, MAX_NUMS, &maxNum);
    printf("The higher num of the array is %d \n", maxNum);

    reverseArray(array, MAX_NUMS);
    
    printf("New array: ");
    for (int i = 0; i < MAX_NUMS; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int arrayTwo[MAX_NUMS] = {4, 3, 9, 22, 2};
    
    int minNumArrTwo;
    int maxNumArrTwo;

    getMinAndMax(arrayTwo, MAX_NUMS, &minNumArrTwo, &maxNumArrTwo);

    printf("Highest number of the second array: %d \nLowest number of the array: %d\n", maxNumArrTwo, minNumArrTwo);

    int target = 9;
    int *ptrResult;

    ptrResult = findNum(arrayTwo, MAX_NUMS, target);

    if (ptrResult != NULL) {
        printf("I found the target %d in the array, it was stored in %p and it's in the position %d\n", target, (void*)ptrResult, ptrResult - arrayTwo + 1);
    }

    else {
        printf("I didn't found the target \n");
    }


    return 0;


}

void increment(int *num) {
    // 'num' conté l'adreça de x. 
    // Amb '*num' accedim a la variable original i li sumem 1.
    (*num)++; 
}

void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getMax(int *arr, int size, int *maxResult) {
    *maxResult = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] >= *maxResult) {
            *maxResult = arr[i];
        }
    }
    return *maxResult;
}

void reverseArray(int *arr, int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = temp;
    }
}

void getMinAndMax(int *arr, int size, int *minNum, int *maxNum) {
    *minNum = arr[0];
    *maxNum = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] >= *maxNum) {
            *maxNum = arr[i];
        }

        if (arr[i] <= *minNum) {
            *minNum = arr[i];
        }
    }
}

int* findNum(int *arr, int size, int number) {
    
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == number) {
            return (arr + i);
        }
    }
    return NULL;
}   
