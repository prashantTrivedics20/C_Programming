#include<stdio.h>

int main()
{
    
    int T,i,max,min;
    scanf("%d",&T);
    int N;
    scanf("%d",&N);
    int a[N],j,k;
    for(i=0; i<T; i++)
    {
        for(j=0; j<N; j++)
        {
        scanf("%d",&a[j]);
        max=a[0];
        min=a[0];
        for(k=1; k<N; k++)
        {
            if(a[k]>max)
            max=a[k];
            if(a[k]<min)
            min=a[k];
        }
        }
    
    printf(" maximun=%d ",max-min);

    }
            
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}