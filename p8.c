/* enter a value3
1 
2 2 
3 3 3 
*/
#include <stdio.h>

int main() {
    int r,c,n;
    printf("enter a value");
    scanf("%d" ,&n);
    for(r<1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",r);
        }
        printf("\n");
    }
}