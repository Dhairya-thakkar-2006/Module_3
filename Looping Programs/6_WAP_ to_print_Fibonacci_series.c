#include<stdio.h>
main()
{
	int c,a=0,b=1,n,i;
	printf("\n\n\t Enter the number to print fibonacci series : ");
	scanf("%d",&n);
	
	printf("\n\n\t %d %d",a,b);
	
	for(i=1;i<n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }



}
	
