#include<stdio.h>
int main()
{
    int p,t,new1;
    float r,compound_total, compound_interest;

    printf("\n\n\t Enter the principle amount :  ");
    scanf("%d",&p);



    printf("\n\n\t Enter the total amount of time :  ");
    scanf("%d",&t);

    printf("\n\n\t Enter the rate of interest in percent:  ");
    scanf("%f",&r);

    compound_total=p*pow((1+(r/100)),(t))  ;
    new1=pow(2,3);
    printf("\n\n\tYour total amount after %d years will be : %.2f",t,compound_total);

    compound_interest=compound_total - p;
    printf("\n\n\tYour Compound Interest amount after %d years will be : %.2f",t,compound_interest);


}

