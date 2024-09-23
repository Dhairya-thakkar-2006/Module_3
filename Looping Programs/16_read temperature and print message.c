/*16.Write a C program to read temperature in centigrade and display a suitable
message according to the temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include<stdio.h>
main()
{
    int temp;

    printf("\n\n\t Enter any temperature :  ");
    scanf("%d",&temp);

    if(temp>=40)
        printf("\n\n\t %d is very hot temperature :  ",temp);
    else if(temp>=30)
        printf("\n\n\t %d is hot temperature :  ",temp);
    else if(temp>=20)
        printf("\n\n\t %d is normal temperature :  ",temp);
    else if(temp>=10)
        printf("\n\n\t %d is cold temperature :  ",temp);
    else if(temp>=0)
        printf("\n\n\t %d is very cold temperature :  ",temp);
    else
        printf("\n\n\t %d is freezing temperature : ",temp);
}
