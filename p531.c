/*   A 
    B B 
   C C C 
  D D D D 
 E E E E E 
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=1;i<=5;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%c ",i+64);
        }
        printf("\n");
    }
}