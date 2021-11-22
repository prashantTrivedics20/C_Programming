#include<stdio.h>
int main()
{
    int x=10;
    printf("hi");
    if(x<30)
    {
        printf("inside if");
        x=x+15;
    
        if(x<50)
        {
            printf("inside else if");
            x>>=2;
        }
        else
        {
            printf("inside inner else");
            x=x*3;
        }
    }
    printf("outside if %d",x);
}

