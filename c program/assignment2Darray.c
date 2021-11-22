//1 wap to input a 2D array of size M*N and display it in tabular form
/*#include<stdio.h>
int main()
{
    int M,N,i,j;
    int n;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array in taular form\n");
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}*/
//2 wap to input a 2D array of size M*N and find sum and average of the all the elements..
/*#include<stdio.h>
int main()
{
    int M,N,i,j,s=0;
    int n;
    float avg;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("sum of all the element in the 2D array\n");
    printf("%d\n",s);
    avg=(float)s/(M*N);
    printf("average of the element=%f",avg);
    
}*/
//WAP to input a 2d array of the size M*N find the sum of the idivisibal row and indivisibal columns,,,,
/*#include<stdio.h>
int main()
{
    int M,N,i,j,s=0;
    int n;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("sum of all the indivisial rows\n");
    for(i=0; i<M; i++)
    {
        s=0;
        for(j=0; j<N; j++)
        {
            
           s=s+a[i][j];
        }
        printf("%d ",s);

    }
    printf("sum of all the columns\n");

    for(i=0; i<N; i++)
    { s=0;
        for(j=0; j<M; j++)
        {
            
            
            s=s+a[j][i];
        }
        printf("%d\n",s);
    }
   

    
}*/
// write a progam to dispay boundary elements of it
/*#include<stdio.h>
int main()
{
    int i,j,M,N;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==0||j==0||i==M-1||j==N-1)
            {
                printf("%d ",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}*/
// write a program to input a 2D array of size M*N and display the transpose of it..........
/*#include<stdio.h>
int main()
{
    int i,j,M,N;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}*/
// write a program to to input a 2D array and find the sum of its dioganal elements..
/*#include<stdio.h>
int main()
{
    int i,j,M,N,s;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        s=0;
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i==j||(i+j)==N-1)
                {
                    s=s+a[i][j];

                }
            }
        }
        printf(" sum of the diagonal=%d",s);
    }
    else
    {
        printf(" sum of the diagonal is not exist ");
    }
}*/
// write a program to input a 2D array and display diagonal elements in matrix form.....
/*#include<stdio.h>
int main()
{
    int i,j,M,N,s;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        s=0;
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i==j||(i+j)==N-1)
                {
                    printf("%d ",a[i][j]);

                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf(" sum of the diagonal is not exist ");
    }
}*/
// write a program to check the matrix is sparse or dence..
/*we know that if number of zero element is greater than  the number of non zero element then it is  called  sparse matrix
and viceversa*/
/*#include<stdio.h>
int main()
{
    int i,j,M,N,z=0,nz=0;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(a[i][j]==0)
                {
                    z++;
            
                }
                else
                {
                    nz++;
                }
                
            }
        }
        if(z>nz)
            printf("sparse");
        else
            printf("dence");

    }
    else
    {
        printf("not exist");
    }
}*/
// write a program to input a 2D array and check weather it is identity matrix or not.....
/*#include<stdio.h>
int main()
{
    int i,j,M,N,z=0,nz=0;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(i==j&&a[i][j]==1)
                {
                    z++;
                }
                else if(i!=j&&a[i][j]==0)
                {
                    nz++;
                }
            }
        }
        if(z==M&&nz==M*N-M)
        {
            printf("identity");
        }
        else
        {
            printf("not identity");
        }
    }
               
    else
    {
        printf("not exist");
    }
}*/
// wap a program in c to calculate diterminent of a 3*3 matrix
/*i#include<stdio.h>
int main()
{
    int i,j,M,N,d;
    printf("Enter the number of rows");
    scanf("%d",&M);
    printf("Enter the number of columns");
    scanf("%d",&N);
    int a[M][N];
    if(M==N)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        d=0;
        for(i=0; i<M; i++)
        {
           d=d+a[0][i]*(a[2][(i+2)%3]*a[1][(i+1)%3]-a[2][(i+1)%3]*a[1][(i+2)%3]);
            
        }
        printf(" diterminant =%d",d);
    }
}*/
// Wrrite a program to input 2 matrixes and multiply them..........
/*#include<stdio.h>
int main()
{
    int i,j,M,N,P,Q,s,k;
    printf("Enter the rows and column size of marix 1");
    scanf("%d%d",&M,&N);
    printf("Enter the rows and column size of matrix 2");
    scanf("%d%d",&P,&Q);
    int a[M][N],b[P][Q];
    if(N==P)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Ente the elements of matrix 2");
        for(i=0; i<P; i++)
        {
            for(j=0; j<Q; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<M; i++)
        {
            s=0;
            for(j=0; j<Q; j++)
            {
                  s=0;
                for(k=0; k<N;k++)
                {
                    s=s+a[i][k]*b[k][j];


                }
                   printf("%d\t",s);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" not multiply the matrix");
    }
}*/
//write  a program to add 2 matrix and display it............
/*#include<stdio.h>
int main()
{
    int i,j,M,N,P,Q,s,k;
    printf("Enter the rows and column size of marix 1");
    scanf("%d%d",&M,&N);
    printf("Enter the rows and column size of matrix 2");
    scanf("%d%d",&P,&Q);
    int a[M][N],b[P][Q];
    if(M==N&& P==Q)
    {
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Ente the elements of matrix 2");
        for(i=0; i<P; i++)
        {
            for(j=0; j<Q; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("matrix affter adding\n");
        for(i=0; i<M; i++)
        {
        
            for(j=0; j<Q; j++)
            {

                s=a[i][j]+b[i][j];
                printf("%d\t",s);
            }
            printf("\n");
        }
    }
    else
    {
        printf(" can't be add ");
    }
}*/
// write a program to find  upper trangular matrix and print them.........
/*#include<stdio.h>
int main()
{
    int M,N,i,j;
    int n;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i-j>0)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
}*/
// write a program to find lower trangular matrix and print them.........
/*#include<stdio.h>
int main()
{
    int M,N,i,j;
    int n;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i-j<0)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }
}*/
//write a program to input a matrix and print it in zig zack form....
/*
1       2       3       4
5       6       7       8
9       1       2       3
4       5       9       1
*/

/*#include<stdio.h>
int main()
{
    int M,N,i,j;
    int n;
    printf("Enter the row size");
    scanf("%d",&M);
    printf("Enter the column size");
    scanf("%d",&N);
    int a[M][N];
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==1||i==3)
            {
                printf("%d\t",a[i][M-j-1]);
            }
            else
            {
                printf("%d\t",a[i][j]);
            }
                


            
        }
        printf("\n");
    }
}*///out put
/*
1       2       3       4
8       7       6       5
9       1       2       3
1       9       5       4
*/
// "match the table games........."
/*#include<stdio.h>
int main()
{
    int i,j,M,N,P,Q,s,k,z;
    printf("Enter the rows and column size of marix 1");
    scanf("%d%d",&M,&N);
    printf("Enter the rows and column size of matrix 2");
    scanf("%d%d",&P,&Q);
    int a[M][N],b[P][Q];
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Ente the elements of matrix 2");
        for(i=0; i<P; i++)
        {
            for(j=0; j<Q; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        z=0;
        for(i=0; i<M; i++)
        {
            for(j=0; j<N; j++)
            {
                if(a[i][j]==b[i][j])
                {
                    z++;
                }
            }
        }
        if(z>=3)
        {
            printf("you win the match");
        }
        else
        {
            printf("not win the match");
        }
}*/





















    





