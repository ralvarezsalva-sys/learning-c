#include <stdio.h>

// We will create a function that takes a number and returns if its pair or impair

int isPair(int a) {
    if (a % 2 == 0) {
        return 1; // If it's pair, it will return True, otherwise it won't return nothing so it will be false
    }
    return 0;

}

// We change the function as we can use it in every loop in for, and we dont waste memory whith that array

int bigger(int a, int b) {
    if (a > b) {
        return a;
    }
    else return b;
}

// Now we will make a function that takes a temperature in Celsius and returns the temperature in Fahrenheit

float CtoF(float temp) {
    float tempF = temp * (9.0 / 5.0) + 32;
    return tempF;
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

    float userTemp = 0.0;
    

    while (1) {
        printf("Please, now tell me a temperature in Celsius and i will convert it to Fahrenheit \n");
        if (scanf("%f", &userTemp) == 1 && userTemp >= -273) {
            while (getchar() != '\n');
            break;
        }
        printf("Not a real Celsius temperature \n");
        while (getchar() != '\n');
    }

    float tempInF = CtoF(userTemp);

    printf("The temperature: %.2f ºC is equal to %.2f Fahrenheits \n", userTemp, tempInF);


    return 0;

}
