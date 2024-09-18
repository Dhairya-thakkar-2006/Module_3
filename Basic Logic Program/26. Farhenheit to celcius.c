//farhenheit to celcius
#include<stdio.h>
main()
{
    int far;
    float cel;

    printf("Enter any farhenheit value :  ");
    scanf("%d",&far);

    cel = (far-32)*5/9;
    printf("The Celcius value of the given farhenheit value is :  %.2f",cel);
    }
