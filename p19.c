/* enter a value5
EDCBA
EDCBA
EDCBA
EDCBA
EDCBA
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
            printf("%c",j+64);
        }
        printf("\n");
    }
}
