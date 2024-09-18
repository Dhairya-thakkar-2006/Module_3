#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    if (*str == '\0') {
        return;
    }

    reverse(str + 1);

    printf("%c", *str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    printf("Reversed string: ");
    reverse(str);
    printf("\n");

}

