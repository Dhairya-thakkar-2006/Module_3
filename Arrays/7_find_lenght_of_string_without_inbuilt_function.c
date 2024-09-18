#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    char ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' ) {
        str[len] = ch;
        len++;
    }
    str[len] = '\0';

    printf("Length of the string is: %d\n", len);

}

