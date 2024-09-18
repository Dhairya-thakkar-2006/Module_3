/* WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers*/
#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,e_count=0,o_count=0,e_sum=0,o_sum=0;
    printf("Enter number 1 : ");
    scanf("%d",&n1);
    printf("Enter number 2 : ");
    scanf("%d",&n2);
    printf("Enter number 3 : ");
    scanf("%d",&n3);
    printf("Enter number 4 : ");
    scanf("%d",&n4);
    printf("Enter number 5 : ");
    scanf("%d",&n5);
    printf("Enter number 6 : ");
    scanf("%d",&n6);
    printf("Enter number 7 : ");
    scanf("%d",&n7);
    printf("Enter number 8 : ");
    scanf("%d",&n8);
    printf("Enter number 9 : ");
    scanf("%d",&n9);
    printf("Enter number 10 : ");
    scanf("%d",&n10);

    if(n1%2==0)
    {
        e_count++;
        e_sum+=n1;
    }

    else
    {
        o_count++;
        o_sum+=n1;
    }
    if(n2%2==0)
    {
        e_count++;
        e_sum+=n2;
    }

    else
    {
        o_count++;
        o_sum+=n3;
    }

    if(n3%2==0)
    {
        e_count++;
        e_sum+=n3;
    }

    else
    {
        o_count++;
        o_sum+=n3;
    }

    if(n4%2==0)
    {
        e_count++;
        e_sum+=n4;
    }

    else
    {
        o_count++;
        o_sum+=n4;
    }

    if(n5%2==0)
    {
        e_count++;
        e_sum+=n5;
    }

    else
    {
        o_count++;
        o_sum+=n5;
    }

    if(n6%2==0)
    {
        e_count++;
        e_sum+=n6;
    }

    else
    {
        o_count++;
        o_sum+=n6;
    }

    if(n7%2==0)
    {
        e_count++;
        e_sum+=n7;
    }

    else
    {
        o_count++;
        o_sum+=n7;
    }


    if(n8%2==0)
    {
        e_count++;
        e_sum+=n8;
    }

    else
    {
        o_count++;
        o_sum+=n8;
    }

    if(n9%2==0)
    {
        e_count++;
        e_sum+=n9;
    }

    else
    {
        o_count++;
        o_sum+=n9;
    }

    if(n10%2==0)
    {
        e_count++;
        e_sum+=n10;
    }

    else
    {
        o_count++;
        o_sum+=n10;
    }


    printf("\n\n\tTotal even numbers are : %d",e_count);
    printf("\n\n\tTotal odd numbers are : %d",o_count);

    printf("\n\n\tSum of all even numbers are : %d",e_sum);
    printf("\n\n\t Sum of all odd numbers are : %d",o_sum);
}
