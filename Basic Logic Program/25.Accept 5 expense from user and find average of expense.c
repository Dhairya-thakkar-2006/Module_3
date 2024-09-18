//25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
    char ex1[20],ex2[20],ex3[20],ex4[20],ex5[20];
    int ex1_cost,ex2_cost,ex3_cost,ex4_cost,ex5_cost;
    float avg_cost;


    printf("Enter Expense 1 :  ");
    scanf("%s",&ex1);
    printf("Enter cost of Expense 1 :  ");
    scanf("%d",&ex1_cost);
    printf("Enter name of Expense 2 :  ");
    scanf("%s",&ex2);
    printf("Enter cost of Expense 2 :  ");
    scanf("%d",&ex2_cost);
    printf("Enter name of Expense 3 :  ");
    scanf("%s",&ex3);
    printf("Enter cost of Expense 3 :  ");
    scanf("%d",&ex3_cost);
    printf("Enter name of Expense 4 :  ");
    scanf("%s",&ex4);
    printf("Enter cost of Expense 4 :  ");
    scanf("%d",&ex4_cost);
    printf("Enter name of Expense 5 :  ");
    scanf("%s",&ex5);
    printf("Enter salary of Expense 5 :  ");
    scanf("%d",&ex5_cost);

    avg_cost = (ex1_cost+ex2_cost+ex3_cost+ex4_cost+ex5_cost)/5;

    printf("\n\n\t Average salary of all employees is %.2f:  ",avg_cost);
}

