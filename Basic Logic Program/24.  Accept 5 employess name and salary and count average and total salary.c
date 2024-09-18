//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
main()
{
    char e1[20],e2[20],e3[20],e4[20],e5[20];
    int e1_sal,e2_sal,e3_sal,e4_sal,e5_sal;
    float avg_sal;


    printf("Enter name of Employee1 :  ");
    scanf("%s",&e1);
    printf("Enter salary of Employee1 :  ");
    scanf("%d",&e1_sal);
    printf("Enter name of Employee2 :  ");
    scanf("%s",&e2);
    printf("Enter salary of Employee2 :  ");
    scanf("%d",&e2_sal);
    printf("Enter name of Employee3 :  ");
    scanf("%s",&e3);
    printf("Enter salary of Employee3 :  ");
    scanf("%d",&e3_sal);
    printf("Enter name of Employee4 :  ");
    scanf("%s",&e4);
    printf("Enter salary of Employee4 :  ");
    scanf("%d",&e4_sal);
    printf("Enter name of Employee5 :  ");
    scanf("%s",&e5);
    printf("Enter salary of Employee5 :  ");
    scanf("%d",&e5_sal);

    avg_sal = (e1_sal+e2_sal+e3_sal+e4_sal+e5_sal)/5;

    printf("\n\n\t Average salary of all employees is %.2f:  ",avg_sal);
}
