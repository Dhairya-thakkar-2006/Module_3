#include <stdio.h>

int main() {
    int number;

    printf("\n\n\tEnter any number: ");
    scanf("%d", &number);

    int result = 1;
    int i;

    for (i = number; i > 1; i--) {
        result *= i;
    }

    if (number < 0) {
        printf("\n\tFactorial of a negative number does not exist.\n");
    } else {
        printf("\n\tFactorial of %d is %d.\n", number, result);
    }

    return 0;
}
