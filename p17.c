/* enter a value5
55555
44444
33333
22222
11111
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
            printf("%d",i);
        }
        printf("\n");
    }
}
