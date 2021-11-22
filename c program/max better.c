#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        
    }
    c=0;
    for(i=0; i<n; i++)
    {
        b=a[i];
        for(j=0; i<n; j++)
        {
            if(b%j==0)
            {
                c++;
            }
        }
    }
    if(c>2)
    {
        printf("%d ",a[i]);
    }
        
    
        
        
        
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
