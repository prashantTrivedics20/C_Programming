#include<stdio.h>
int main()
{
    int i,j,c;
    int a[]={2,3,4,5,2,4,3,5,6,7,5};// uniqe element of an array
    int arr[11];
    for(i=0; i<11; i++)
    {
        c=0;
        for(j=0; j<11; j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d ",a[i]);
        }
        

    }
}