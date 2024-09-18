#include<stdio.h>
main()
{
	char str1[10];
	int i, count=0;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		printf("\n\n\t %c", str1[i]);
		count++;
	}
	
	printf("\n\n\t Length of the String : %d", count);
	
}
