
// wap to insert the element at the end of the array
#include<stdio.h>
int main()
{
    int n,item;
    printf("Enter the size");
    scanf("%d",&n);
    int a[1000],i,j;
    int size;
    size=sizeof(a)/sizeof(a[0]);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element that you want to insert");
    scanf("%d",&item);
    if(n==size)
    {
        printf(" it is not possible to insert the element");
    }
    else
    {
        a[n]=item;
    }
    printf("after inserting the element at the end of the array ");
    for(i=0; i<=n; i++)
    {
        printf("%d ",a[i]);
    }

}