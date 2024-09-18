#include<stdio.h>
main()
{
	char str1[10];
	int i, len;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
	len=strlen(str1);
	
	
	for(i=len-1;i>=0;i--)
	{
		printf("%c", str1[i]);
	
	}
	
	
	
}
