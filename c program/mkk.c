
//wap a program to find the maximum difference of an array.............
#include<stdio.h>
int main() {
    int T;
    scanf("%d",&T);
    int N;
    scanf("%d",&N);
    int a[N],i,j,max,min;
    for(i=0; i<T; i++)
    {
        for(j=0; j<N; j++)
        {
        scanf("%d",&a[j]);
        }
    
      
        max=a[0];
        min=a[0];
        
    
    
    
    for(j=1; j<N; j++)
    {
        if(a[j]>max)
        
            max=a[j];
        
        
        if(a[j]<min)
        
            min=a[j];
        

    
    }
    }
    
       // printf("%d",max-min);
       printf("%d %d",max,min);
    
    
            
    
    
        
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}