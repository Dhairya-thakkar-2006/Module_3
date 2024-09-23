// Find the Character Is Vowel or Not :

#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Enter any character : ");
	scanf("%c",&ch);

	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		printf("\n\n\t Vowel.");
		
	}
	
	else if (ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
	{
		printf("\n\n\t Vowel.");
	}
	
	else
	{
		printf("\n\n\t Consonant.");
	}
}
