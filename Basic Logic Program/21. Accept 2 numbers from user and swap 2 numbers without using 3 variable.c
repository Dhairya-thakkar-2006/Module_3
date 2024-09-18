//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

// with 3rd variable

/*#include<stdio.h>
main()
{
    int n1,n2,temp;

    printf("\n\n\t Enter first number :  ");
    scanf("%d" ,&n1);
    printf("\n\n\t Enter second number :  ");
    scanf("%d" ,&n2);
    printf("\n\n\t Before swapping number 1 is %d and number 2 is %d",n1,n2);

    temp=n1;
    n1=n2;
    n2=temp;
    printf("\n\n\t After swapping number 1 is %d and number 2 is %d",n1,n2);

}
*/


//without using 3rd variable

#include<stdio.h>
main()
{
    int n1,n2,temp;

    printf("\n\n\t Enter first number :  ");
    scanf("%d" ,&n1);
    printf("\n\n\t Enter second number :  ");
    scanf("%d" ,&n2);
    printf("\n\n\t Before swapping number 1 is %d and number 2 is %d",n1,n2);

    n2=n1+n2;
    n1=n2-n1;
    n2=n2-n1;

    printf("\n\n\t After swapping number 1 is %d and number 2 is %d",n1,n2);

}
