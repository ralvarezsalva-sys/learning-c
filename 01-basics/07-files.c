/*Reading && editing a file*/

#include <stdio.h>
#define MAX 50

int main() {
    char ch;
    int in;
    char userText[MAX] = "This notes it's me the one editing it now";

    FILE* f = fopen("apunts-pac3.txt", "a+");

    if (f == NULL) {
        printf("Error: No s'ha pogut obrir el fitxer.\n");
        return 1;
    }

    fscanf(f, " %c", &ch);
    fscanf(f, "%d", &in);

    fseek(f, 0, SEEK_CUR);

    fprintf(f, "\n%s\n", userText);

    fclose(f);

    printf("%c \t %d \n", ch, in);

    return 0;
}
