/*
enter a value3
1
23
456
*/
#include <stdio.h>
int main() {
    int r,c,n,co=1;
    printf("enter a value");
    scanf("%d" ,&n);
    for(r<1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",co++);
        }
        printf("\n");
    }
}
