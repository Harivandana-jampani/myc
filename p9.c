/*
enter a value5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
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
            printf("%d ",c);
        }
        printf("\n");
    }
}