/* 10=1+2+3+4+5+6+7+8+9=0110
12358132134*/
#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("%d",a);
    printf("%d",b);
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
         printf("%d",c);
    }
}