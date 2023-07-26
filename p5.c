/* enter a value4
ABCD
ABCD
ABCD
ABCD */
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
            printf("%c",c+64);
        }
        printf("\n");
    }
}