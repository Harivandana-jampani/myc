/* 5 5 5 5 5 
  4 4 4 4 
   3 3 3 
    2 2 
     1 
*/
#include <stdio.h>

int main() {
int i,j,k,c=1;
for(i=5;i>=1;i--)
{
    for(k=5;k>=i;k--)
        printf(" ");
    for(j=1;j<=i;j++)
    {
        printf("%d ",i);
    }
        printf("\n");
    
}
}