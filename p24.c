/* enter a value3
9 8 7 
6 5 4 
3 2 1 
*/
#include <stdio.h>
int main()
{
    int i,j,n,c=9;
    printf("enter a value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",c--);
        }
        printf("\n");
    }
}