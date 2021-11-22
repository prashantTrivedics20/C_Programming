#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,t;
    char s[5];
    scanf("%[^\n]",s);
    for(i=0; s[i]!='\0'; i++)
    {

    }
    i=i-1;
    j=0;
    while(j<i)
    {
        t=s[j];
        s[j]=s[i];
        s[i]=t;
        i--;
        j++;
    }
    for(i=0; s[i]!='\0'; i++)
    {
        printf("%s\n",s[i]);
    }

}