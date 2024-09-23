/*Write a C program to input basic salary of an employee and calculate
its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/

#include<stdio.h>
main()
{
    int sal;
    float HRA,DA,GSal;

    printf("\n\n\tEnter your basic salary :  ");
    scanf("%d",&sal);

    if(sal>20000)
    {
        HRA=(sal*30)/100;
        DA=(sal*95)/100;
        GSal = sal+HRA+DA;
        printf("\n\n\tYour Gross Salary is %f",GSal);
    }
    else if(sal>10000)
    {
        HRA=(sal*25)/100;
        DA=(sal*90)/100;
        GSal = sal+HRA+DA;
        printf("\n\n\tYour Gross Salary is %f",GSal);
    }
    else
    {
        HRA=(sal*20)/100;
        DA=(sal*80)/100;
        GSal = sal+HRA+DA;
        printf("\n\n\tYour Gross Salary is %f",GSal);
    }
}
