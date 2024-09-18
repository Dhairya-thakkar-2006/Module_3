#include<stdio.h>
#include<string.h>

struct Student
{
	int rollno;     //structure members
	char name[30];
	float per;
}S;

union Student1
{
	int rollno;     //union members
	char name[30];
	float per;
}S1;

main()
{


	S.rollno=101;
	strcpy(S.name,"Dhairya");
	S.per=67.89;

	S1.rollno=101;
	strcpy(S1.name,"Dhairya");
	S1.per=67.89;

	printf("\n\n\t------Running Structure ---------");
	printf("\n\n\t Rollno : %d",S.rollno);
	printf("\n\n\t Name : %s",S.name);
	printf("\n\n\t Per : %.2f", S.per);

	printf("\n\n\t------Running Union ---------");
	printf("\n\n\t Rollno : %d",S1.rollno);
	printf("\n\n\t Name : %s",S1.name);
	printf("\n\n\t Per : %.2f", S1.per);

}
