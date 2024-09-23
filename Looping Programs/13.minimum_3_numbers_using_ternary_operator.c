//C program to find the minimum of three numbers using ternary operator

#include<stdio.h>
int main()
{
	int a, b, c, Minimum;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);
	Minimum = (a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("Minimum number is: %d", Minimum);
	
}
