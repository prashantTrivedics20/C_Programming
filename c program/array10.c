#include<stdio.h>
int main() {
    int n1,n2;
    char ch;
    scanf("%d%d",&n1,&n2);
    scanf("%*c%c",&ch);
    switch(ch)
    {
        case '+':printf("%d",n1+n2);
                break;
        case '-':printf("%d",n1-n2);
                break;
        
        case '*':printf("%d",n1*n2);
                break;
        case '/':printf("%d",n1/n2);
                break;
        case '%':printf("%d",n1%n2);
                break;
                
        
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}