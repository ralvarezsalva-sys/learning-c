// We want to make three fucntions for asking numbers to the user, put them into an Array, and inverting this numbers positions
#include <stdio.h>
#include <string.h>
#define MAX 50

void askarray(int arr[], int sizearray) {
    for (int i = 0; i < sizearray; i++) {
        int userNum;
        while (1) {
            printf("Pls, tell me the num number %d: \n", i + 1);
            if (scanf("%d", &userNum) == 1) {
                arr[i] = userNum;
                while (getchar() != '\n');
                break;
            }
            printf("Not a real integer, pls enter a real integer \n");
        }
    }
}

void showarray(int arr[], int sizearray) {
    for (int i = 0; i < sizearray; i++) {
        if (i == 0) {
            printf("Array = [%d, ", arr[i]);
        }
        else if (i == sizearray -1) {
            printf("%d]\n", arr[i]);
        }
        else {
            printf("%d, ", arr[i]);
        }        
    }
}

void invertarray(int arr[], int sizearray) {
    int temp;
    for (int i = 0; i < sizearray / 2; i++) {
        temp = arr[i];
        arr[i] = arr[sizearray - 1 - i];
        arr[sizearray - 1 - i] = temp;
    }

}

int main() {
    int userSize;
    

    while (1) {
        printf("Pls tell me how many numbers are you going to enter to the array \n");
        if (scanf("%d", &userSize) == 1 && userSize > 0 && userSize < 50) {
            while (getchar() != '\n');
            break;
        }
        printf("Number not valid, pls enter a real integer from 1 to 49 \n");
        while (getchar() != '\n');
    }

    int userArray[userSize];

    askarray(userArray, userSize);

    showarray(userArray, userSize);

    invertarray(userArray, userSize);

    showarray(userArray, userSize);

    return 0;
}