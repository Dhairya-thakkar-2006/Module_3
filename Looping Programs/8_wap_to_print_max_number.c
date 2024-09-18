#include<stdio.h>
#include<math.h>

int main()
{
    int n ,maxi=0;

    int max(int a,int b){
        return a>b?a:b;
    }

    printf("Enter any number :  ");
    scanf("%d",&n);

    while(n>0)
    {
        maxi=max(maxi,n%10);
        n/=10;

    }

    printf("The maximum digit in the number is %d",maxi);
}
