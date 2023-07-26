/*enter a value4
AAAA
BBBB
CCCC
DDDD*/
#include <stdio.h>

int main() 
{
    int r,c,n;
    printf("enter a value");
    scanf("%d",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            printf("%c",r+64);
        }
        printf("\n");
    }
}
