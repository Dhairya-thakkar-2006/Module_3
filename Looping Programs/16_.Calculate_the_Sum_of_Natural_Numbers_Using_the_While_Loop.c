//16.Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
    int n,i=1,sum=0;

    printf("\n\n\t Enter the number till which you want the sum :  ");
    scanf("%d",&n);

    while(i<=n)
    {
        sum+=i;
        i++;
    }

    printf("\n\n\t The sum of natural numbers until %d is %d . ",n,sum);

}
