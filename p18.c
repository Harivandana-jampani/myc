/* enter a value5
54321
54321
54321
54321
54321
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
            printf("%d",j);
        }
        printf("\n");
    }
}