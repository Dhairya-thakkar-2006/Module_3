// sum in sum series

// (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
main()
{
    int n,i,j;
    long int sum=0;

    printf("\n\n\t Enter any number for printing series :  ");
    scanf("%d",&n);

    printf("\n\n\t The given series is :  \n");
    printf("\n\n\t (1)+ ");
    for(i=1;i<n-1;i++)
    {
        printf("(");
        for(j=1;j<=i;j++)
        {

            printf("%d +",j);
        }
        printf("%d)+",i+1);

    }

    printf(" (");
    for(i=1;i<n;i++)
    {
        printf("%d+",i);
    }
    printf("%d)",n);


    printf("\n\n\t The sum of this series is %d . ",sum);
}

