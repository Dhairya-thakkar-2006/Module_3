//28.Convert years into days and months

#include<stdio.h>
main()
{
    int years,months,days;
    printf("\n\n\t Enter years :  ");
    scanf("%d",&years);

    months = years*12;
    days = years*365;

    printf("\n\n\t Total months according to your years are :  %d",months);
    printf("\n\n\t Total days according to your years are :  %d",days);

}
