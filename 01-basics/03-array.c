/* We create a function that takes all the parameters that the user puts into the array, but there are some brain signals
that are false, so we know that because it repeats 2 times every single time*/

#include <stdio.h>
#define MAX_SIZE 10

void askArray(int arr[], int sizeArray);
void giveArray(int arr[], int sizeArray);
void printArray(int arr[]);

int main() {
    
    
    while(1) {          // We ask the user to tell us how many integers will get the array
        int sizeUser = 0;
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


    return 0;
}


