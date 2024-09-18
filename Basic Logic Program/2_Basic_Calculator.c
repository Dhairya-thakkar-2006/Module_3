//Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
main()
{
    printf("Basic Calulator---------------------------------------------");

    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    printf("\n\n\t Addition of two numbers is :  %d",n1+n2);
    printf("\n\n\t Subtraction of two numbers is :  %d",n1-n2);
    printf("\n\n\t Multiplication of two numbers is :  %d",n1*n2);
    printf("\n\n\t Division of two numbers is :  %d",n1/n2);
    printf("\n\n\t Modulo of two numbers is :  %d",n1%n2);
}
