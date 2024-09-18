#include<stdio.h>
main()
{
    int n,i,sum=0;

    printf("\n\n\t Enter any number for printing series :  ");
    scanf("%d",&n);

    printf("\n\n\t The given series is :  \n");

    for(i=1;i<n;i++)
    {
        printf("%d +",i);
        sum+=i;
    }
    sum+=n;
    printf("%d",n);

    printf("\n\n\t The sum of this series is %d . ",sum);
}
