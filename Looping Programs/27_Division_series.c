#include<stdio.h>
main()
{
    int i,j,n;

    printf("Enter the last number of series :  ");
    scanf("%d",&n);

    for(i=1,j=i+1;i<n-1;i++,j++)
    {
        printf(" %d/%d",i,j);

        if(i%2==1)
            printf(" - ");
        else
            printf(" + ");
    }
    printf("%d/%d",n-1,n);

}
