/* a=10,b=20 swapping a=20,b=10*/
#include <stdio.h>

int main() {
    int a=10,b=20;
    printf("%d %d",a,b);
    printf("before swap");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap");
    printf("%d %d",a,b);
}