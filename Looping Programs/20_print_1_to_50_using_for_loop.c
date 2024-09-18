#include<stdio.h>
main()
{
	int i;
    for(i=1;i<=50;i++)
    {

        if(i<10)
            printf("\t0%d",i);
        else
            printf("\t%d",i);
        if(i%10==0)
            printf("\n");

    }
}
