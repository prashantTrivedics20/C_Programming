
// wap to insertion of the array at the biginning 
#include<stdio.h>
int main()
{
    int n,items;
    scanf("%d",&n);
    int a[1000],i,j;                          //n-1
    int size=sizeof(a)/sizeof(a[0]);//1 2 3 4 5 6 7........................size-1                                         my task to insert the element at the end place
    for(i=0; i<n; i++)              //0 1 2 3 4 5 n
    {
        scanf("%d",&a[i]);

    }
    scanf("%d",&items);
    if(n==size)
    {
        printf("no more items can be inserted");
    }
    else
    {//shifting operation
    for(i=n-1; i>=0; i--)
    {
        a[i+1]=a[i];


    }

    a[0]=items;
    n++;
    }
    printf("after insertion");
    for(i=0; i<n; i++)0
    {
        printf("%d ",a[i]);
    }
}
    


    


