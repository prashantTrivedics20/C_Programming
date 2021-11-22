#include<stdio.h>
int main()
{
    char s[1000],c;
    int i,j,a[1000]={0};
    gets(s);
    for(i=0; s[i]='\0';i++)
    {
        c=1;
        if(a[i]==0)
        {
            for(j=i+1;s[j]='\0';j++)
            {
                if(s[i]==s[j])
                {
                    c++;
                    a[j]=-1;
                }
            }
           
        
          printf("%d ",c);
        }


    }


}




