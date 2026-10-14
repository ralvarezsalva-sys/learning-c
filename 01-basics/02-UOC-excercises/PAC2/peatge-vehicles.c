/*
File: main.c
Author: Ruslan Alvarez
Course: 2026
Description: PAC2
*/

/*System header files*/
#include <stdio.h>
#include <stdbool.h>

typedef enum {MOTORCYCLE, CAR, VAN, TRUCK} tVehicles;
typedef enum {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} tDays;


int main() {
    /*Creating variables*/
    tVehicles typeVehicle;
    tDays weekday;
    int passengers;
    int askElectric;
    bool isElectric = 0;
    bool hasDiscount;

    /*Asking user the inputs*/
    printf("VEHICLE (0-MOTORCYCLE, 1-CAR, 2-VAN, 3-TRUCK\n");
    scanf("%u", &typeVehicle);

    printf("IS AN ELECTRIC VEHICLE (0-FALSE, 1-TRUE)\n");
    scanf("%d", &askElectric);
    isElectric = (askElectric == 1);

    printf("PASSENGERS?\n");
    scanf("%d", &passengers);

    printf("DAY (0-MON, 1-TUE, 2-WED, 3-THU, 4-FRI, 5-SAT, 6-SUN)\n");
    scanf("%u", &weekday);

    /*Expression*/

    hasDiscount = (((typeVehicle == MOTORCYCLE) || (typeVehicle == VAN) || (typeVehicle == CAR)) && ((weekday == MONDAY) || (weekday == TUESDAY))) || ((typeVehicle == TRUCK) && ((weekday == SATURDAY) || (weekday == SUNDAY))) || (passengers >= 4 || isElectric); 

    printf("HAS DISCOUNT (0-FALSE, 1-TRUE): %d \n", (int) hasDiscount);

    return 0;
    
}