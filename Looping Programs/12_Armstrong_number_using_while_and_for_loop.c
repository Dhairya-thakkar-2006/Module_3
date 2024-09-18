// 0  1  1 2 3 5 8
//a  b  c

#include<stdio.h>
main()
{
	int a=0, b=1, c, i, n; 
	
	printf("\n\n\t Enter n to print fibonacci series : ");
	scanf("%d",&n);
	
	printf(" %d %d", a, b);
	
	for(i=1;i<n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
	
	
}
