#include <stdio.h>

int main() {
    int numbers[5],i;

    for (i = 0; i < 5; i++) {
    	printf("\n\n\t Enter the number :");
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even\n", numbers[i]);
        } else {
            printf("%d is odd\n", numbers[i]);
        }
    }

}
