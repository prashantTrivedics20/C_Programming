//******
//******
//******
//******
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
//12345
//12345
//12345
//12345
//12345
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//54321
//54321
//54321
//54321
//54321
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=n;j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//11111
//22222
//33333
//44444
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=n; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
//444444
//333333
//222222
//111111
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=m; i>=1; i--)
    {
        for(j=n;j>=1; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
//horigentelly incresing
//1  2  3  4  5
//6  7  8  9  10
//11 12 13 14 15 
//16 17 18 19 20
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    k=1;

    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=n; j++)
        {
            printf("%d\t",k++);
        }
        printf("\n");
    }
}*/
//vertically incresing pattern
//1 5 9 13 17
//2 6 10 14 18
//3 7 11 15 19
//4 8 12 16 20
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;

    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        k=i;
        for(j=1;j<=n; j++)
        {
            printf("%d\t",k);
            k=k+4;
        }
        printf("\n");
    }
}*/
//ABCDE
//ABCDE
//ABCDE
//ABCDE
//ABCDE
//first mathed for finding this type of the pattern
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=n; j++)
        {
            printf("%c",j+64);
        }
        printf("\n");
    }
}*/
// second method for finding this type of the array
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j='A';j<='E'; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}*/
//third method for finding these type of the array by using ASCII value..........
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=65;j<=69; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}*/
//EDCBA
//BDCBA
//BDCBA
//BDCBA
//BDCBA
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=1; i<=m; i++)
    {
        for(j=69;j>=65; j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}*/
//AAAAAA
//BBBBBB
//CCCCCC
//DDDDDD
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=65; i<=69; i++)
    {
        for(j=65;j<=69; j++)//this is iterate five times working as like column
        {
            printf("%c",i);
        }
        printf("\n");
    }
}*/
//DDDDDD
//CCCCCC
//BBBBBB
//AAAAAA
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=65; i<=69; i++)
    {
        for(j=65;j<=69; j++)//this is iterate five times working as like column
        {
            printf("%c",i);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d%d",&m,&n);
    for(i=69; i>=65; i--)
    {
        for(j=65;j<=69; j++)//this is iterate five times working as like column
        {
            printf("%c",i);
        }
        printf("\n");
    }
}*/
//trangle....
//*
//**
//***
//****
//*****
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
//1
//12
//123
//1234
//12345
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//4
//43
//432
//4321
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    for(i=m; i>=1; i--)
    {
        for(j=m;j>=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//4
//33
//222
//1111
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    for(i=m; i>=1; i--)
    {
        for(j=m;j>=i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
//1
//22
//333
//4444
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
//horigantilly incresing trangle pattern.............
//1
//23
//456
//78910
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    k=1;
    for(i=1; i<=m; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
}*/
//verticallly incresing trangle pattern.......
//1
//25
//368
//4,,,,,,,,7910
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        k=i;
        for(j=1;j<=i; j++)//loop chalega twotimes
        {
            printf("%d",k);
            k=k+m-j;
        }
        printf("\n");
    }
}*/
//mirror image pattern........
//   *
//  **
// ***
//****
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
//   1
//  12
// 123
//1234
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
//   1
//  22
// 333
//4444
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/
 //  4
 // 33
// 222
//1111
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=m; i>=1; i--)
    {
        for(k=1; k<=i-1; k++)
        {
            printf(" ");
        }
        for(j=m; j>=i; j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}*/



/*//sir please discuss it ...
       7
     4 8
   2 5 9
1 3 6 10*/
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,p,s,q,k;
    scanf("%d",&m);
    s=0;
    for(i=1; i<=m; i++)
    {
        s=s+i;
    }
    s=s-m+1;

    for(i=m; i>=1; i--)
    {
        q=s;
        p=i+1;
        for(k=1; k<=i-1; k++)
        {
            printf("\t");
        }
        for(j=m; j>=i; j--)
        {
            printf("%d\t",q);
            q=q+p;
            p++;
        }
        printf("\n");
        s=s-i+1;
    }
}*/
/* * 
  ***  
 ***** 
*******
 ***** 
  ***
   **/
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=m-1; i>=1; i--)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=2*i-1;j>=1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/* * 
   1  
  *A* 
  123 
 *A*A*
 12345
*A*A*A*
1234567   */
/*#include<stdio.h>
int main()
{
    int i,j;
    int m,n,k,l;
    scanf("%d",&m);
    for(i=1; i<=m; i++)
    {
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1; j++)
        {
            if(j%2==0)
                printf("A");
            else
                printf("*");
        }
        printf("\n");
        for(k=1; k<=m-i; k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}*/
/* 1   
  121  
 12321 
1234321 */
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}*/
/*
1234321
 12321 
  121  
   1  */
/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=0; i<4; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=n-i; j++)
        {
            printf("%d",j);
        }
        for(k=n-1-i;k>=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}*/                      /*      4       4 4 4 4 4       4
                                 4 3       3 3 3       3 4
                                 4 3 2       2       2 3 4 

                                 4 3 2 1              2 3 4  

                                 4 3 2       2        2 3 4
                                 4 3       3 3 3        3 4
                                 4       4 4 4 4 4        4*/ //this is the method for finding this question.........
/*                                 
4444444                                
4333334
4322234
4321234
4322234
4333334
4444444*/
/*#include<stdio.h>
int main()
{
    int n;
    int i,j,k;
    scanf("%d",&n);
    for(i=n; i>=2; i--)
    {
        for(j=n;j>=i; j--)
        {
            printf("%d",j);
        }
        for(j=1; j<=2*i-3; j++)
        {
            printf("%d",i);
        }
        k=i;
        for(j=n;j>=i; j--)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
    for(j=n; j>=1; j--)
    {
        printf("%d",j);
    }
    for(i=2;i<=n; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=2; i<=n; i++)
    {
        for(j=n;j>=i; j--)
        {
            printf("%d",j);
        }
        for(j=1; j<=2*i-3; j++)
        {
            printf("%d",i);
        }
        k=i;
        for(j=n;j>=i; j--)
        {
            printf("%d",k);
            k=k+1;
        }
        printf("\n");
    }
}*/



































