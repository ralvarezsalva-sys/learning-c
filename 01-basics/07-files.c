/*Reading && editing a file*/

#include <stdio.h>

int main() {
    char ch;
    int in;
    
    FILE* f;
    f = fopen("apunts-pac3.txt", "r+");
    fscanf(f, "%c", &ch);
    fscanf(f, "%d", &in);
    fclose(f);
    printf("%c \t %d \n", ch, in);

    return 0;

    



}

