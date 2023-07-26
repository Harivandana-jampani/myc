/*enter a value5
A
BB
CCC
DDDD
EEEEE
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
            printf("%c",r+64);
        }
        printf("\n");
    }
}