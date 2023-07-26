/* enter a value4
1234
123
12
1
*/
#include <stdio.h>
int main() {
    int r,c,n;
    printf("enter a value");
    scanf("%d" ,&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}