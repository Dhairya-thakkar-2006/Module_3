//Find circumference of triangle

#include<stdio.h>
main()
{
    int s1,s2,s3,circum;

    printf("\n\n\t Enter the length of the first side of triangle :  ");
    scanf("%d",&s1);

    printf("\n\n\t Enter the length of the second side of triangle :  ");
    scanf("%d",&s2);

    printf("\n\n\t Enter the length of the third side of triangle :  ");
    scanf("%d",&s3);

    circum = s1+s2+s3;

    printf("\n\n\t The circumference of the Triangle is %d\n",circum);
}

