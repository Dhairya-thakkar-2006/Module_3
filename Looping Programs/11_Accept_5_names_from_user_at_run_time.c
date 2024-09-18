#include <stdio.h>

int main() {
    int i;
    char names[5][50];
    
    printf("Enter 5 names (no spaces in names):\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\n\n You entered: ");
    for (i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

}

