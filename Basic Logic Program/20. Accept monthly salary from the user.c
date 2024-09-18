//20.Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
    int salary;
    float ins,loan,remain;

    printf("\n\n\t Enter your monthly salary :  ");
    scanf("%d",&salary);

    loan=salary*10/100;
    ins=salary*10/100;

    remain=salary-loan-ins;
    printf("\n The remaining salary after %.2f insurance and %.2f loan installment is %.2f",ins,loan,remain);
}
