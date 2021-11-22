#include<stdio.h>
int main()
{
    int m,n;
    //where m is denoted by the number of the rows and n is denoted by the nuber of columns
    printf("Ente rthevalue of the m rows and n columns");
    scanf("%d%d",&m,&n);
    int a[100][100],i,j,s;
    printf("enter the array element%d",m*n);
    for(i=0; i<m; i++)
    {

        s=0;
        for(j=0; j<n; j++)
        {
            
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
        printf(" nume rof rows equal=%d",s);
    }
    

    for(j=0; j<n; j++)
    {
        s=0;
        for(i=0; i<m; i++)
        {
            scanf("%d",&a[j][i]);
            s=s+a[j][i];
            
        }
        printf(" number of columns=%d",s);
    }
}