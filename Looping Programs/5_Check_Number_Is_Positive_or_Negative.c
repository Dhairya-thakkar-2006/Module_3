// Check Number Is Positive or Negative :

#include<stdio.h>
main()
{
	int number;
	
	printf("\n\n\t Enter any number : ");
	scanf("%d",&number);
	
	if( ! (number>0) )  
		printf("\n\n\t Negative");
	else
		printf("\n\n\t Positive");
	
}
