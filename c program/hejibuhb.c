#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;
    int i,index,len;
    index=-1;
    printf("Enter the string");
    gets(s);
    printf("Enter the character ");
    scanf("%c",&ch);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==ch)
        {
            index=i;
        }
    }
    if(index!=-1)
    {
        i=index;
        while(i<len)
        {
            s[i]=s[i+1];
            i++;
        }
    }
    printf("%s",s);


}