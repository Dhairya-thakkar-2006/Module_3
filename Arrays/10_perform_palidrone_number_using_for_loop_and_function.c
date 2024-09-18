#include <stdio.h>

int main() {
    int number, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    for (; number != 0; number /= 10) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

}
