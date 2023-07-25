/* factorial 5!=5*4*3*2*1=120*/
#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}