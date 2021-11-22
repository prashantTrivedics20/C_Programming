// write a program to check weather is a number is even or odd using the function....
/*#include<stdio.h>
int check(int n);
int main()
{
    int n,s;
    scanf("%d",&n);
    s=check(n);
    if(s==1)
    {
        printf("even\n");

    }
    else
    {
        printf("odd\n");
    }
    s=check(15);//reusubility of the code..from line number 18 to 27 this is the advantage of the using function......
    if(s==1)
    {
        printf("even\n");

    }
    else
    {
        printf("odd\n");
    }

}
int check(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}*/
// write a program to find the binomiyal cofficient using function.........
/*#include<stdio.h>
int fact(int a)
{
    int f=1;
    while(a>0)
    {
       f=f*a;
       a--;
    }
    return f;


}
int binomiyalcoffi(int a,int r)
{
    a=fact(a)/(fact(a-r)*fact(r));

}



int main()
{
    int n,s;
    scanf("%d",&n);
    s=fact(n);
    //printf("%d",s);
    int ncr,c;
    scanf("%d",&c);
    ncr=binomiyalcoffi( n, c);
    printf("%d",ncr);

}*/
// using the function you have to find weather the number is leap lear or not........
/*#include<stdio.h>
int leapyear(int year);
int main()
{
    int year,s;
    printf("Enter the year that you want to check");
    scanf("%d",&year);
    s=leapyear(year);
    if(s==1)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }
    s=leapyear(2000);// that is the advantage of the using the functon by reususubility of the code.....line number 93 to line number 101
    if(s==1)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap year");
    }

    
}
int leapyear(int year)
{
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}*/
// how to swap two number by using the function....
/*#include<stdio.h>
// swap ke case me hum function ho non returnibal banate hai.............
void swap(int a,int b);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);//actual variable
    swap(m,n);
    printf("%d %d\n",m,n);

}
void swap(int a,int b)// formal variable 
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("after swaping\n");
    printf("%d %d\n",a,b);
    
}*/
//I want to check weather it is number is palindrone are not by using all the catagories of the function..so this program
// will be starting fr om 140 and ending from 248..and which envolve all the catagories of the function...
// write a program to check weather it is number is palindrone or not...
//1. with arguments and with return type....
/*#include<stdio.h>
int check(int n)
{
    int rev=0;
    while(n>0)
    {
    rev=rev*10+n%10;
    n=n/10;
    }
    return rev;
    
}
int main()
{
    int a,s;
    printf("Enter the number that you want to check");
    scanf("%d",&a);
    s=check(a);
    if(s==a)
    printf("palidrone");
    else
    printf("not palindrone");
}*/
//2. with arument but with out return type....
/*#include<stdio.h>
void check(int n)
{
    int t;
    int rev=0;
    t=n;
    while(n>0)
    {
    rev=rev*10+n%10;
    n=n/10;
    }
    if(rev==t)
    printf("palidrone");
    else
    printf("not palindrone");
    
}
void main()
{
    int a,s;
    printf("Enter the number that you want to check");
    scanf("%d",&a);
    check(a);
    
}*/
//3.without argument and with out return type...
/*#include<stdio.h>
void check()
{
    int t;
    int n;
    int rev=0;
    printf("Enter the number that you want to check");
    scanf("%d",&n);
    t=n;

    while(n>0)
    {
    rev=rev*10+n%10;
    n=n/10;
    }
    if(rev==t)
    printf("palidrone");
    else
    printf("not palindrone");
    
}
void main()
{
    
    check();
    
}
*/
//4.without argument but with return type
/*#include<stdio.h>
int  check()
{
    int t;
    int n;
    int rev=0;
    printf("Enter the number that you want to check");
    scanf("%d",&n);
    t=n;

    while(n>0)
    {
    rev=rev*10+n%10;
    n=n/10;
    }
    if(rev==t)
    printf("palidrone");
    else
    printf("not palindrone");
    
    return rev;
    
}
int main()
{
    int s;
    s=check();
}*/









