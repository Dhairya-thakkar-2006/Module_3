//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
    int n;

    printf("\n\n\t Enter any number to find first three powers :  ");
    scanf("%d",&n);

    int pow1,pow2,pow3;

    pow1=n*1;
    pow2=n*n;
    pow3=n*n*n;

    printf("\n\n\t The first power of %d is %d",n,pow1);
    printf("\n\n\t The first power of %d is %d",n,pow2);
    printf("\n\n\t The first power of %d is %d",n,pow3);
}
