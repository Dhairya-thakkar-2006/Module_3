#include <stdio.h>

int main() {
    int numbers[5];
    int count = 0;
    int evenCount = 0;
    int oddCount = 0;

    printf("Enter 5 numbers:\n");
    while (count < 5) {
        printf("Number %d: ", count + 1);
        scanf("%d", &numbers[count]);
        count++;
    }

    count = 0;

    while (count < 5) {
        if (numbers[count] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        count++;
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

}

