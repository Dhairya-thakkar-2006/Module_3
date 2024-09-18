#include<stdio.h>
main()
{
	char str1[10]="Dhairya", str2[10];
	int i;
	
	for(i=0;str1[i]!='\0';i++)
	{
			str2[i]=str1[i];
	}
	
	printf("\n\n\t str1 : %s", str1);
	printf("\n\n\t str2 : %s", str2);
}
	
