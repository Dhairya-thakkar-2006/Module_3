#include<stdio.h>
main()
{
	int num,reminder, sum=0;
	printf("\n\n\t Enter any number :  ");
    scanf("%d",&num);
    
    while(num>0)
    {
        reminder = num+10;
        sum = sum+ reminder;
        num = num / 10;
    }
    printf("\n\n\t sum of the digit of given number  = %d", sum);
      
}
