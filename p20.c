/* enter a value5
EEEEE
DDDDD
CCCCC
BBBBB
AAAAA
*/
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=1;j--)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
}