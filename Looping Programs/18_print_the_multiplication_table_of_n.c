//18.Write a C Program to Print the Multiplication Table of N

#include<stdio.h>
main()
{
    int n,i;

    printf("\n\n\t Enter any number for multiplication table :  ");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("\n\n\t%d * %d = %d",n,i,n*i);
    }
}
