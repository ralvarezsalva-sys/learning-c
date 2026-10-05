/*
File: main.c
Author: Ruslan Alvarez
Course: 2026
Description: PAC1
*/

/*System header files*/
#include <stdio.h>

/*Defining the constants*/
#define DAYS_TO_SECONDS 86400
#define HOURS_TO_SECONDS 3600
#define MINUTES_TO_SECONDS 60

/*Main function*/
int main() {
    /*Defining the variables*/
    int userSeconds, operationSeconds, days, hours, minutes;
    days = 0;
    hours = 0; 
    minutes = 0;
    
    

    /*Asking the user how many seconds*/
    printf("Please, enter how many seconds you want to convert them into days, hours, and minutes \n");
    scanf("%d", &userSeconds);
    operationSeconds = userSeconds;

    /*Operations*/
    days = operationSeconds / DAYS_TO_SECONDS;
    operationSeconds = operationSeconds % DAYS_TO_SECONDS;
    hours = operationSeconds / HOURS_TO_SECONDS;
    operationSeconds = operationSeconds % HOURS_TO_SECONDS;
    minutes = operationSeconds / MINUTES_TO_SECONDS;
    operationSeconds = operationSeconds % MINUTES_TO_SECONDS;

    /*OUTPUT*/

    printf("----OUTPUT----\n\n");
    printf("%d seconds are equal to: \n", userSeconds);
    printf("Days: %d \nHours: %d \nMinutes: %d \nSeconds: %d \n", days, hours, minutes, operationSeconds);

    return 0;

}