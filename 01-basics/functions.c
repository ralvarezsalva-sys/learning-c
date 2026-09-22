#include <stdio.h>

// We will create a function that takes a number and returns if its pair or impair

int isPair(int a) {
    if (a % 2 == 0) {
        return 1; // If it's pair, it will return True, otherwise it won't return nothing so it will be false
    }
    return 0;

}

// We will create a function that takes 3 numbers and return de bigger one

int max_of_three(int a, int b, int c) {
    int max = a;
    if (b > a) max = b;
    if (c > max) max = c;
    return max; // As we already say that max is a, if the other options are not true, we keep this first value.
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

    int userListNums[3];
    for (int i = 0; i <= 2; i++) {
        printf("Please, write the num number %d: \n", i + 1);
        while (1) {
            if (scanf("%d", &userListNums[i]) == 1) {
                while (getchar() != '\n');
                break;
            }
            printf("Not a real integer, please repeat it \n");
            while (getchar() != '\n');

        }

    }

    int num1 =  userListNums[0];
    int num2 = userListNums[1];
    int num3 = userListNums[2];

    int max_num = max_of_three(num1, num2, num3);
    printf("The max num is %d \n", max_num);
    
    return 0;
}
