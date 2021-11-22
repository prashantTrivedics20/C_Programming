#include<stdio.h>
int main() {
    int n,b;
    printf("Enter the size of an array");
    scanf("%d",&n);
    int a[10],i,j,c,prime[10],t=0;
    printf("Enter the element of an array");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        
    }
    
    for(i=0; i<n; i++)
    {
        c=0;
        
        for(j=1; j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                c++;
            }
        }
    
    if(c>2)
    {
        prime[t]=a[i];
        t++;
    }

    }

    printf("prime number in above serise");
    for(i=0; i<t; i++)
    {
        printf("%d ",prime[i]);

    }


        
    
        
        
        
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
