//area of rectangular prism


#include<stdio.h>
main()
{
    int w,h,l,area;

    printf("\n\n\t Enter the width of the prism :  ");
    scanf("%d",&w);

    printf("\n\n\t Enter the hight of the prism :  ");
    scanf("%d",&h);

    printf("\n\n\t Enter the length of the prism :  ");
    scanf("%d",&l);

    area = 2*(w*l + h*l + h*w);

    printf("\n\n\t The area of the prism is %d\n",area);
}
