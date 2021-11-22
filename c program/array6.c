//wap to insert the element of an array at any given position which is provided by the user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    int size,item,position;
    int a[1000],i,j;
    size=sizeof(a)/sizeof(a[0]);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Ente the element that you want insert at any random position");
    scanf("%d",&item);
    printf("Enter the position");
    scanf("%d",&position);
    if(n==size)
    {
        printf("it can not possible to insert yhe element");

    }
    else
    {
        for(i=n-1; i>=position; i--)
        {
            a[i+1]=a[i];

        }
        a[position]=item;
        n++;
    }
    printf("after insering the element");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
