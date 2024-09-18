#include<stdio.h>
main()
{
    int length,width,area;

    printf("\n\n\t Enter length of the rectangle:  ");
    scanf("%d",&length);
    printf("\n\n\t Enter width of the rectangle:  ");
    scanf("%d",&width);

    area=length*width;

    printf("\n\n\t The area of the rectangle is %d",area);
}
