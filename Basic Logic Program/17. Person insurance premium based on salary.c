//person insurance premium based on salary
#include<Stdio.h>
main()
{
    int salary;
    float premium;


    printf("\n\n\t For salary >=50000, the premium is 10 %% :  ");
    printf("\n\n\t For salary >=40000, the premium is 8 %% :  ");
    printf("\n\n\t For salary >=30000, the premium is 6 %% :  ");
    printf("\n\n\t For salary <30000, the premium is 5 %% :  ");
    printf("\n\n\t Enter your salary :  ");


    scanf("%d",&salary);

    if(salary>=50000)
    {
        premium = salary*10/100;
        printf("\n\n\t Your premium is %.2f",premium);
    }

    else if(salary>=40000)
    {
        premium = salary*10/100;
        printf("\n\n\t Your premium is %.2f",premium);
    }
    else if(salary>=30000)
    {
        premium = salary*10/100;
        printf("\n\n\t Your premium is %.2f",premium);
    }
    else{
            premium = salary*10/100;
        printf("\n\n\t Your premium is %.2f",premium);
    }
}
