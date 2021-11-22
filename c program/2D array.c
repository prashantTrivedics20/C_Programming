#include<stdio.h>
int main()
{
    int m,n;
    //where m is denoted by the number of the rows and n is denoted by the nuber of columns
    printf("Ente rthevalue of the m rows and n columns");
    scanf("%d%d",&m,&n);
    int a[100][100],i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("enter the array element%d",m*n);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("tabular form of the array");
            printf("%d",a[i][j]);
        }
    }

}