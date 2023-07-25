/* armstrong number 153 
exp:1cube+5cube+3cube*/
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp=0;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(temp==sum)
    {
        printf("armstrong");
    }
    else
    {
        printf("no armstrong");
    }
}