/* 1 2 3 4 5 
  6 7 8 9 
   10 11 12 
    13 14 
     15 
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
        printf("%d ",c++);
    }
        printf("\n");
    
}
}