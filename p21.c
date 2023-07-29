/* enter a value4
D
CC
BBB
AAAA
*/
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
}