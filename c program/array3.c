#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    printf("Enter the element%d",n);
    int a[n],i,j,temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }

    }

    
    
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    

}