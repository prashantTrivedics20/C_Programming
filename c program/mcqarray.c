/*#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    for(i=1; i<=4; i++)
    {
        
    }
     for(i=0; i<5; i++)
        printf("%d ",++a[i]);
}*/
/*#include<stdio.h>
int main()
{
    
    int a[5]={5,1,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    
        printf("%d, %d, %d",i,j,m);
}*/
/*#include<stdio.h>
int main()
{
    int i;
    int a[10]={1,2,3,4,5};
    
        printf("%d ",a[5]);
}*/
/*#include<stdio.h>
int main()
{
    int i;
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};

        printf("%d\n",a);

        printf("%d",b);

   
}*/
/*#include<stdio.h>
int main()
{
    int a[10];
    printf("%d %d",a[12],a[12]);
}*/
/*#include<stdio.h>
int main()
{
    int a[1]={10};
    printf("%d",0[a]);

}*/
/*#include<stdio.h>
int main()
{
    int a[1]={10};
    printf("%d",a[0]);

}*/
/*#include<stdio.h>
int main()
{
    int a[]={12,14,15,23,45};
    printf("%u\n",&a);//puri array ka address if base address is 100 then &a=100
    printf("%u\n",a); // it should like a=&a[0] 
    printf("%u\n",&a+1);//base address + sizeof the total array 
    printf("%u\n",&a+2);//base address +sizeof the total array+again size of the array;
    printf("%u\n",);
}*/
/*#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    for(i=4; i>=0; i--)
    {
        printf("%d ",++a[i]);
        ++a[i];
    }
}*/
#include<stdio.h>
int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    for(i=1; i<=4; i++)
    {
        a[i]=a[i-2];

    }
    for(i=0; i<5; i++)
    {
        printf("%d\t",a[i]);
    }
}






