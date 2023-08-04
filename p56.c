/* E D C B A 
  D C B A 
   C B A 
    B A 
     A 
*/
#include<stdio.h>
int main()
{
    int i,j,k;
    
    for(i=5;i>=1;i--)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}