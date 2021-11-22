#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n],i;
    if(n%2==0)
    {
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i%2==0)
        {
            a[i]=a[i+1];
        }
    }
    for(i=0; i<n; i++)
    {
        if(i%2==1)
        {
            a[i]=a[i-1];
                
        }
        printf("%d ",a[i]);
    }
        
    }
if(n%2!=0)
{
printf("Not even");
}
}


