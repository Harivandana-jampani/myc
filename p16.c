/* enter a value4
1234
567
89
10
*/
#include <stdio.h>
int main() {
    int r,c,n,co=1;
    printf("enter a value");
    scanf("%d" ,&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",co++);
        }
        printf("\n");
    }
}