//15.Calculate sum of 10 numbers using of while loop

#include<stdio.h>
int main()
{
    int n,i=1,sum=0;

    while(i<=10)
    {
        printf("Enter number %d :  ",i);
        scanf("%d",&n);

        sum+=n;
        i++;
    }
    printf("The sum of given 10 numbers is %d . ",sum);
}
