//1 2 3 6 9 18 27 54...


#include<stdio.h>
main()
{
    int n,i,s1=1,s2=2;

    printf("Enter the last number of series :  ");
    scanf("%d",&n);

    printf("\n\n\t The series is :  ");
    printf("%d %d ",s1,s2);

    for(i=1;i<n/2;i++)
    {
        s1*=3;
        s2*=3;
        printf("%d ",s1);
        printf("%d ",s2);
    }



}

