//WAP to Find Area And Circumference of Circle



#include<stdio.h>
main()
{
    int radius;
    float cir,area, pi=3.14;

    printf("Enter the radius of circle:  ");
    scanf("%d",&radius);

    cir=2*pi*radius;
    area=pi*radius*radius;

    printf("\n\n The cricumference of circle is %.2f",cir);
    printf("\n\n The area of circle is %.2f",area);


}
