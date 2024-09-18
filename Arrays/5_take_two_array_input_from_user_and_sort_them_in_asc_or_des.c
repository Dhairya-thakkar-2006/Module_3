#include<stdio.h>
main()
{
    int n1,n2,arr1[20],arr2[20],temp,i,j;

    printf("\n\n\tEnter the size of the array1 :  ");
    scanf("%d",&n1);


    for(i=0;i<n1;i++)
    {
        printf("\n\n\tEnter elements of array1. arr[%d] :  ",i);
        scanf("%d",&arr1[i]);


    }

    printf("\n\n\tEnter the size of the array2 :  ");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
    {

        printf("\n\n\tEnter elements of array2. arr[%d] : ",i);
        scanf("%d",&arr2[i]);


    }

    int max=arr1[1];
    for(i=0;i<n1-1;i++)
    {
        for(j=i+1;j<n1;j++)
        {
            if(arr1[i]>arr1[j])
            {
                temp=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=temp;
            }
        }
    }

    printf("\n\n\tThe array in descending order is :\n");
    for(i=0;i<n1;i++)
    {

        printf("\n\n\t arr[%d] : %d",i,arr1[i]);

    }


    int min=arr2[1];
    for(i=0;i<n2-1;i++)
    {
        for(j=i+1;j<n2;j++)
        {
            if(arr2[i]<arr2[j])
            {
                temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }

    printf("\n\n\tThe array in descending order is :\n");
    for(i=0;i<n2;i++)
    {

        printf("\n\n\t arr[%d] : %d",i,arr2[i]);

    }

}

