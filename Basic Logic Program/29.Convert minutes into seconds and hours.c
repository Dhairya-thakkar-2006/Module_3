//29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
    int minutes,seconds,hours;
    printf("\n\n\t Enter minutes :  ");
    scanf("%d",&minutes);

    seconds = minutes*60;
    hours = minutes/60;

    printf("\n\n\t Total seconds according to your minutes are :  %d",seconds);
    printf("\n\n\t Total hours according to your minutes are :  %d",hours);

}
