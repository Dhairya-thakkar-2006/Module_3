#include <stdio.h>

int main() {
    int numbers[5];
    int factorial;
    int i,j;
    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials of the entered numbers are:\n");
    for (i = 0; i < 5; i++) {
        int num = numbers[i];
        factorial = 1;

        if (num < 0) {
            printf("Factorial of %d is not defined for negative numbers.\n", num);
        } else {
            for (j = 1; j <= num; j++) {
                factorial *= j;
                
                if (factorial < 0) {
                    printf("Factorial of %d exceeds the limit of int.\n", num);
                    factorial = -1;
                    break;
                }
            }
            if (factorial >= 0) {
                printf("Factorial of %d is %d\n", num, factorial);
            }
        }
    }

}

