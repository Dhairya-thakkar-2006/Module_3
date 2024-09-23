//18.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
    int buyVal,sellVal,diff;

    printf("\n\n\t Enter the buying value of the product :  ");
    scanf("%d",&buyVal);
    printf("\n\n\t Enter the selling value of the product :  ");
    scanf("%d",&sellVal);

    diff=sellVal-buyVal;

    if(diff>=0)
        printf("\n\n\tThe profit is %d rupees",diff);

    else
        printf("\n\n\tThe loss is %d rupees",-diff);
}
