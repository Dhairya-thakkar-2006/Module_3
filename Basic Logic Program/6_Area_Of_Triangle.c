#include<stdio.h>
main()
{

    int breadth,hight;
    float area;

    printf("\n\n\t Enter the breadth of the triangle:  ");
    scanf("%d",&breadth);
    printf("\n\n\t Enter the hight of the triangle:  ");
    scanf("%d",&hight);

    area = breadth*hight/2;

    printf("Area of the triangle is %.2f",area);
}
