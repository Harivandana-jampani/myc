/*enter a value4
1111
2222
3333
4444 */
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
            printf("%d",r);
        }
        printf("\n");
    }
}
