/* enter a value5
EDCBA
DCBA
CBA
BA
A
*/
#include <stdio.h>

int main() {
   int i,j,n;
   printf("enter a value");
   scanf("%d",&n);
   for(i=5;i>=1;i--)
   {
       for(j=i;j>=1;j--)
       {
           printf("%c",j+64);
       }
       printf("\n");
   }
}