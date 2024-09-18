//accept 3 numbers from user and check palindrome
//
#include<stdio.h>
main()
{
    int rev=0,n,temp,rem,i=1;

    while(i<=3)
    {
       printf("\n\n\tEnter  number %d:  ",i);
        scanf("%d",&n);

        temp=n;
        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;

        }


        if(temp==rev)
            printf("\n\n\t The given number %d is a palindrome . ",temp);
        else
            printf("\n\n\t The given number %d is not a palindrome . ",temp);

        i++;
        rev=0;
    }


}
