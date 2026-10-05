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
    int userSeconds, operationSeconds, days, hours, minutes, seconds;
    days = 0;
    hours = 0; 
    minutes = 0;
    seconds = 0;
    
    

    /*Asking the user how many seconds*/
    printf("Please, enter how many seconds you want to convert them into days, hours, and minutes \n");
    scanf("%d", &userSeconds);
    

    /*Operations*/
    days = userSeconds / DAYS_TO_SECONDS;
    hours = (userSeconds % DAYS_TO_SECONDS) / HOURS_TO_SECONDS;
    minutes = (userSeconds % HOURS_TO_SECONDS) / MINUTES_TO_SECONDS;
    seconds = userSeconds % MINUTES_TO_SECONDS;

    /*OUTPUT*/

    printf("----OUTPUT----\n\n");
    printf("%d seconds are equal to: \n", userSeconds);
    printf("Days: %d \nHours: %d \nMinutes: %d \nSeconds: %d \n", days, hours, minutes, seconds);

    return 0;

}