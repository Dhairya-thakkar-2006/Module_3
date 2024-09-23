/* eligibility for admission */

#include<stdio.h>
main()
{
	int rollno;
	char name[30];
	int s1, s2, s3;
	int total=0;
	
	printf("\n\n\t Enter Rollno : ");
	scanf("%d",&rollno);
	printf("\n\n\t Enter Student's Name : ");
	scanf("%s",&name);
	printf("\n\n\n\t Input Marks for the following Subjects ---------");
	printf("\n\n\t Maths : ");
	scanf("%d",&s1);
	printf("\n\n\t Chemistry : ");
	scanf("%d",&s2);
	printf("\n\n\t Physics : ");
	scanf("%d",&s3);

	total=s1+s2+s3;
	printf("\n\n\n\t  -----------------------------------");
	printf("\n\n\t     Rollno               :  %d",rollno);
	printf("\n\n\t     Name of the Student  : %s",name);
	printf("\n\n\t  -----------------------------------");
	printf("\n\n\t      Marks for all the subjects ---------");
	printf("\n\n\t      Maths : %d", s1);
	printf("\n\n\t      Physics : %d", s2);
	printf("\n\n\t      Chemistry : %d", s3);
	printf("\n\n\t  -----------------------------------");
	printf("\n\n\t      Total : %d", total);
	
	if(total>=70)
		printf("\n\n\t       Grade : A+");
		
	else if(total>=60)
		printf("\n\n\t       Grade : A");
		
	else if(total>=50)
		printf("\n\n\t       Grade : B");	
	
	else
		printf("\n\n\t        Grade : The candidate is not available !!");
		
}
