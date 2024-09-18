//30.WAP to convert years into days and days into years


//years into days
/*#include<stdio.h>
main()
{
    int years,days;
    printf("\n\n\t Enter years :  ");
    scanf("%d",&years);

    days = years*365;

    printf("\n\n\t Total days according to your years are :  %d",days);

}
*/


//days into years
#include<stdio.h>
main()
{
    int days;
    float years;
    printf("\n\n\t Enter days :  ");
    scanf("%d",&days);

    years = days/365;

    printf("\n\n\t Total days according to your years are :  %.2f",years);

}
