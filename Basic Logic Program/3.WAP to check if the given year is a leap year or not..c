//3.WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
    int year;

    printf("\n\n\t Enter any year :  ");
    scanf("%d",&year);

    if(year%4==0)
        printf("The given year is a leap year :  ");

    else
        printf("The given year is not a leap year :  ");
}
