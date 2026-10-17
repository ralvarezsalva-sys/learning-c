/*
File: main.c
Author: Ruslan Alvarez
Course: 2026
Description: PAC3
*/

/*System header files*/
#include <stdio.h>

/*Defining the constants*/
#define SIZE_NAME_FILE 13

int main() {

    /*Defining the variables*/
    char fileName[SIZE_NAME_FILE];
    FILE* file;
    char matrix[3][3];
    int output = 0; /*We already assignate value 0, if we got some valid order we change it*/

    /*Asking the user which is the name of the file we want to read*/
    printf("FILENAME?\n");
    scanf("%s", fileName);

    /*Reading file*/
    file = fopen(fileName, "r");
    fscanf(file, "%c", &matrix[0][0]);
    fscanf(file, "%c", &matrix[0][1]);
    fscanf(file, "%c", &matrix[0][2]);
    fscanf(file, " %c", &matrix[1][0]);
    fscanf(file, "%c", &matrix[1][1]);
    fscanf(file, "%c", &matrix[1][2]);
    fscanf(file, " %c", &matrix[2][0]);
    fscanf(file, "%c", &matrix[2][1]);
    fscanf(file, "%c", &matrix[2][2]);

    /*Entering the conditions*/
    if (matrix[0][0] == '.' && matrix[0][1] == '.' && matrix[0][2] == '.' && matrix[1][0] == '.' && matrix[1][1] == 'O' && matrix[1][2] == '.' && matrix[2][0] == '.' && matrix[2][1] == '.' && matrix[2][2] == '.') {
        output = 1;
    }
    
    else {
        if ((matrix[0][0] == 'O' && matrix[0][1] == '.' && matrix[0][2] == '.' && matrix[1][0] == '.' && matrix[1][1] == '.' && matrix[1][2] == '.' && matrix[2][0] == '.' && matrix[2][1] == '.' && matrix[2][2] == 'O') || (matrix[0][0] == '.' && matrix[0][1] == '.' && matrix[0][2] == 'O' && matrix[1][0] == '.' && matrix[1][1] == '.' && matrix[1][2] == '.' && matrix[2][0] == 'O' && matrix[2][1] == '.' && matrix[2][2] == '.')) {
            output = 2;
        }
        else {
            if ((matrix[0][0] == 'O' && matrix[0][1] == '.' && matrix[0][2] == '.' && matrix[1][0] == '.' && matrix[1][1] == 'O' && matrix[1][2] == '.' && matrix[2][0] == '.' && matrix[2][1] == '.' && matrix[2][2] == 'O') || (matrix[0][0] == '.' && matrix[0][1] == '.' && matrix[0][2] == 'O' && matrix[1][0] == '.' && matrix[1][1] == 'O' && matrix[1][2] == '.' && matrix[2][0] == 'O' && matrix[2][1] == '.' && matrix[2][2] == '.')) {
            output = 3;
            }
            else {
                if (matrix[0][0] == 'O' && matrix[0][1] == '.' && matrix[0][2] == 'O' && matrix[1][0] == '.' && matrix[1][1] == '.' && matrix[1][2] == '.' && matrix[2][0] == 'O' && matrix[2][1] == '.' && matrix[2][2] == 'O') {
                    output = 4;
                }
                else {
                    if (matrix[0][0] == 'O' && matrix[0][1] == '.' && matrix[0][2] == 'O' && matrix[1][0] == '.' && matrix[1][1] == 'O' && matrix[1][2] == '.' && matrix[2][0] == 'O' && matrix[2][1] == '.' && matrix[2][2] == 'O') {
                        output = 5;
                    }
                    else {
                        if ((matrix[0][0] == 'O' && matrix[0][1] == '.' && matrix[0][2] == 'O' && matrix[1][0] == 'O' && matrix[1][1] == '.' && matrix[1][2] == 'O' && matrix[2][0] == 'O' && matrix[2][1] == '.' && matrix[2][2] == 'O') || (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O' && matrix[1][0] == '.' && matrix[1][1] == '.' && matrix[1][2] == '.' && matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')) {
                            output = 6;
                        }
                    }
                }
            }            
        }    
    }

    /*closing the file*/
    fclose(file);

    /*Printing th ouput*/
    printf("OUTPUT\nVALUE: %d \n", output);
    
    return 0;
}
    


    


    
