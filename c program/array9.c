/*//wap to print weather a number is prime or not ................
#include<stdio.h>
int main()
{
    int n,i,c,j,s,u;
    scanf("%d %d",&s,&u);
    for(i=s; i<=u; i++)
    {
        c=0;
        for(j=1; j<=i; j++)
        {
            if(n%i==0)
            {
            c++;
            }

        }
    
    
    if(c==2)
    {
        printf("%d\n",i);
    }
    }
}*/
#include<stdio.h>
int main() {
    int T,i,max1,max2,j;
    printf("Enter the test cases");
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        int n;
        scanf("%d",&n);
    
        int a[n];
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
            
        }
        if(a[0]>a[1])
        {
            max1=a[0];
            max2=a[1];
        }
        else
        {
            max1=a[1];
            max2=a[0];
        }
        for(j=2; j<n; j++)
        {
            if(a[j]>max1)
            {
                max2=max1;
                max1=a[j];

            }
            else if(a[j]>max2)
                max2=a[j];            
        }
        printf("%d",max1*max2);
        printf("\n");
    }



        

        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

