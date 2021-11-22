/*#include<stdio.h>
int main() {
    int n,b;
    scanf("%d",&n);
    int a[n],i;
    scanf("%d",&b);
    for(i=0; i<n; i++)
        {
        scanf("%d",&a[i]);
        }
    for(i=0; i<n; i++)
        {
        if(b==a[(n-1)/2])
        {
            printf("%d\n%d",a[(n-1)/2-1],a[(n-1)/2+1]);
            break;
            
        }
        if(b!=a[(n-1)/2])
        {
            
            printf("Not found");
            break;
        }
    }
}*/
// wap a program to convert Decimal to binary number syatem
#include<stdio.h>
int main()
{
    long long decimal, a,b;
    int rem,c=1;
    b=0;
    printf("Enter any decimal number from user");
    scanf("%lld",&a);
    a=decimal;
    while(a>0)
    {
        rem=a%2;
        b=rem*c+b;
        a=a/2;
        c=c*10;
    }
    printf("% Binary number=llf",b);

}
