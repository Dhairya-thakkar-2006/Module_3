#include <stdio.h>

int main() {
    int n, fact = 1, i;

    
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        
    }

    
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    
    printf("The factorial of %d is %d\n", n, fact);

}

