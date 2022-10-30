#include <stdio.h>

int main()
{
    int a = 5, b = 10, t ;

    int *ra = a ;

    int *rb = b;

    t = ra ;
    ra = rb ;
    rb = t ;
    printf("a=%d,b=%d",a,b);

    return 0;
}