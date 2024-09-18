#include <stdio.h>

int main() {
    char names[5][50],i;

    printf("Enter the names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nThe names of the students are:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

}
