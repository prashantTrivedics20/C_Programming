//wap to print weather a number is prime or not ................
/*#include<stdio.h>
int main()
{
    int n,i,c,j,s,u,count;
    printf("Enter the initial and final range");
    scanf("%d %d",&s,&u);
    count=0;
    for(i=s; i<=u; i++)
    {
        c=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
            c++;
            }

        }
    
    
    
    if(c==2)

    {
        count++;
        printf("%d\n",i);
        
    }
    }
    printf(" total prime number of 1 to 1000 is %d",count);
    
}*/
//write a program to convert the number in binary to decimal......
/*#include<stdio.h>
int main()
{
    int n=11000,r,d=0,p=1;
    while(n>0)
    {
        r=n%10;
        d=d+r*p;
        p=p*2;
        n=n/10;
    

    
    printf("%d\n",d);//11000=24
    }
}*/
//write a program to onvert the number in decimal to binary  number system.........
/*#include<stdio.h>
int main()
{
    int d,r,b=0,p=1;
    scanf("%d",&d);
    while(d>0)
    {
        r=d%2;
        b=b+r*p;
        p=p*10;
        d=d/2;
    }
    printf(" binary value is equal to=%d",b);



}*/
