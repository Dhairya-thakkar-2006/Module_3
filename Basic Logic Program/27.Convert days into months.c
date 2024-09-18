//27.Convert days into months

#include<stdio.h>
main()
{
    int days;
    float months;
    printf("\n\n\t Enter days :  ");
    scanf("%d",&days);

    months = days/30;

    printf("\n\n\t Total months according to your days are :  %.1f",months);

}
