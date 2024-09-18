

#include <stdio.h>
int main()
{
    int n = 1;
    int sum = 0;
    do
    {
        sum = sum + n;
        n++;
    } while (n <= 10);
    printf("Sum of first 10 natural numbers is %d ", sum);
    return 0;
}


