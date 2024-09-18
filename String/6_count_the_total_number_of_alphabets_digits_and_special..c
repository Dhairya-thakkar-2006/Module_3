#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0,i;

    // Prompt the user for input
    printf("Enter a string (up to 99 characters): ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isprint(str[i]) && !isspace(str[i])) {
            specialChars++;
        }
    }

    // Display the counts
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}

