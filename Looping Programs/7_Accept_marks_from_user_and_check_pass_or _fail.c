// Accept marks from user and check pass or fail
#include<stdio.h>
main()
{
	int rollno;
	char name[30];
	int s1, s2, s3, s4, s5;
	int total=0;
	float per;
	
	
	printf("\n\n\t Enter Rollno : ");
	scanf("%d",&rollno);
	printf("\n\n\t Enter Student's Name : ");
	scanf("%s",&name);
	printf("\n\n\n\t Input Marks for the following Subjects ---------");
	printf("\n\n\t Subject-1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Subject-2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Subject-3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Subject-4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Subject-5 : ");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;
	per=total/5;
	printf("\n\n\n\t  -----------------------------------");
	printf("\n\n\t     Rollno               :  %d",rollno);
	printf("\n\n\t     Name of the Student  : %s",name);
	printf("\n\n\t  -----------------------------------");
	printf("\n\n\t      Marks for all the subjects ---------");
	printf("\n\n\t      Subject-1 : %d", s1);
	printf("\n\n\t      Subject-2 : %d", s2);
	printf("\n\n\t      Subject-3 : %d", s3);
	printf("\n\n\t      Subject-4 : %d", s4);
	printf("\n\n\t      Subject-5 : %d", s5);
	printf("\n\n\t  -----------------------------------");
	printf("\n\n\t      Percentage : %.2f", per);
	
	if(per>=70)
		printf("\n\n\t       Grade : A+");
		
	else if(per>=60)
		printf("\n\n\t       Grade : A");
		
	else if(per>=50)
		printf("\n\n\t       Grade : B");	
		
	else if(per>=40)
		printf("\n\n\t        Grade : C");
	
	else
		printf("\n\n\t        Grade : Fail");
		
}
