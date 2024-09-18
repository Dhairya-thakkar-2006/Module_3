
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    int op;
    printf("Enter the values of a :  ");
    scanf("%d",&a);
    printf("Enter the values of b :  ");
    scanf("%d",&b);
    printf("Press  1.Addition");
    printf("Press  2.Addition");
    printf("Press  3.Addition");
    printf("Press  4.Addition");
    printf("Press  5.Modulo");
    printf("Press  6.Exit");


    printf("Enter your Choice : ");
    scanf("%d",&op);
    switch(op)
    {
    case 1	:
        printf("\n\n\tSum of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("\n\n\tDifference of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("\n\n\tMultiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("\n\n\tDivision of Two Numbers is %d : ",a/b);
        break;
    case 5	:
        printf("\n\n\tModulo of Two Numbers is %d : ",a/b);
        break;
    case 6	:
        exit(0);
        break;
    default	:
        printf(" Invalid Choice .Please enter numbers from 1 to 6 .  ");
        break;
    }
    return 0;
}
