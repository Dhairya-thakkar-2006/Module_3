#include <stdio.h>

int main() {
    int i, j;
    int number = 1;
    int patternNum = 1;
    printf("Pattern 1:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    printf("\n");

    printf("Pattern 2:\n");
    for (i = 0; i < 5; i++) {
        for (j = 'a'; j <= 'o'; j++) {
            printf("%c", j);
        }
        printf("\n");
    }

    printf("\n");

    printf("Pattern 3:\n");
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    printf("Pattern 4:\n");
    number = 1; 
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

}

