/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000],i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);// 2 3 4 5 6 7
    }
    if(n==0)
    {
        printf(" it is not possible");
    }
    else
    {
        int N;
        scanf("%d",&N);
        if(N==a[i])
        {
            for(i=N; i<n; i++)
            {
                a[N]=a[i+1];
            }
            n--;
        }
        else
        {
            printf("not found");
        }
    
    
    printf("after delition");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    } 

    


}*/

// wap to perform left rotation on an array by r number of rotations.......
/*#include<stdio.h>
int main()
{
    int a[1000],i,r,n,t,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the %d elements",n);
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of rotation to move left");
    scanf("%d",&r);
    for(i=0; i<r%n; i++)// number of rotations
    {
        t=a[0];
        for(j=0;j<n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[n-1]=t;
    }
    printf("array after rotation");
    for(i=0;i<n; i++)
    {
        printf("%d\t",a[i]);
    }


}*/
 //wap to perform right rotation on an array by r number of rotations
 /*#include<stdio.h>
int main()
{
    int a[1000],i,r,n,t,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the %d elements",n);
    for(i=0;i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of rotation to move right");
    scanf("%d",&r);
    for(i=0; i<r%n; i++)// number of rotations
    {
        t=a[n-1];
        for(j=0;j<n-1; j++)
        {
            a[n-1-j]=a[n-2-j];
        }
        a[0]=t;
    }
    printf("array after rotation");
    for(i=0;i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}*/
//

