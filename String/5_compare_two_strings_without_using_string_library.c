#include<stdio.h>
#include<string.h>;
main()
{
	char City[10];
	char name1[20]="Dhairya Thakkar", name2[20];
	
	char str1[20]="Dhairya ";
	char str2[20]="Thakkar";
	char str3[20];
	
	printf("\n\n\t String in name1 : %s", name1);

	strcpy(name2,"Dhairya Thakkar");
	
	printf("\n\n\t String in name2 : %s", name2);
	
	
	printf("\n\n\t str1 : %s", str1);
	printf("\n\n\t str2 : %s", str2);
	printf("\n\n\t After concatenate : %s", strcat(str1, str2));
	
	if(stricmp(str1, str2)==0)
		printf("\n\n\t Strings are equal.. ");
	
	else
		printf("\n\n\t Strings are not equal.. ");
	

}
