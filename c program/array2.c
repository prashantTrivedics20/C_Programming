
// How to short a array

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the %d element of the array",n);
    //Let say i am assuming the array 89 55 44 2 90  50// your task to convert the array element in accending order 
    int a[n],i,j,temp;//this is the dynamic array
    
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1; i<=n-1; i++)//for traversal//for first traversal the loop will executes  n-1 times for similar way......
    {
        for(j=1; j<=n-i; j++) // for i=1 means first iteration  of i loop the j loop should be execute n-1 times
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }

        }
    }
    printf("after convetrting the number in asccending order");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}