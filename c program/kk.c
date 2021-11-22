#include<stdio.h>
int main() {
    int T,i,B,G;
    int a[2];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0; i<T; i++)
        
    {
        B=a[0];
        G=a[1];
        if(B==G)
        {
            printf("%d %d",B,G);
        }
        
    }
    if(B!=G)
    {
        printf("Not possible");
    }
}