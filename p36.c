/* enter a value5
E
ED
EDC
EDCB
EDCBA
*/
#include <stdio.h>

int main() {
   int i,j,n;
   printf("enter a value");
   scanf("%d",&n);
   for(i=5;i>=1;i--)
   {
       for(j=5;j>=i;j--)
       {
           printf("%c",j+64);
       }
       printf("\n");
   }
}