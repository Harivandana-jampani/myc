/* enter a value3
9 
8 7 
6 5 4 
*/
#include <stdio.h>
int main()
{
    int i,j,n,c=9;
    printf("enter a value");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",c--);
        }
        printf("\n");
    }
}