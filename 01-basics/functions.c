#include <stdio.h>

// We will create a function that takes a number and returns if its pair or impair

int isPair(int a) {
    if (a % 2 == 0) {
        return 1; // If it's pair, it will return True, otherwise it won't return nothing so it will be false
    }
    return 0;

}

// We will create a function that takes 3 numbers and return de bigger one

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    else return b;
}

int main() {
    int userNum = 0;
    while (1) {
        printf("Please tell me a number and i will tell you if its pair or impair \n");
        if (scanf("%d", &userNum) == 1) {
            while (getchar() != '\n'); // We clean the buffer
            break;
        }
        printf("This is not an integer number \n"); // This will show in repeat until the user gives a real integer number
        while (getchar() != '\n');
    }
    if (isPair(userNum)) {
        printf("The number is pair \n");
    }
    else printf("The number is impair \n");

    int maxNum = -99999;
    for (int i = 0; i < 3; i++) {
        int numU = 0;
        while (1) {
            printf("Pls enter the num number %d \n", i + 1);
            if (scanf("%d", &numU) == 1) {
                while (getchar() != '\n');
                break;
            }
            printf("Not a real integer, pls repeat it \n");
            while (getchar() != '\n');

        }
        if (i == 0) maxNum = numU;
        else maxNum = bigger(numU, maxNum);
    }

    printf("The higher num is:  %d \n", maxNum);
    return 0;

}
