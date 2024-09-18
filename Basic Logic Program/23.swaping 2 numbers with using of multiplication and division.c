//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
main()
{
    int n1,n2,temp;

    printf("\n\n\t Enter first number :  ");
    scanf("%d" ,&n1);
    printf("\n\n\t Enter second number :  ");
    scanf("%d" ,&n2);
    printf("\n\n\t Before swapping number 1 is %d and number 2 is %d",n1,n2);

    n2=n1*n2;
    n1=n2/n1;
    n2=n2/n1;

    printf("\n\n\t After swapping number 1 is %d and number 2 is %d",n1,n2);

}
