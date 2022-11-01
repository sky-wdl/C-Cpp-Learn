#include <stdio.h>

int main()
{
    double a=1.144;
    while(a>1)
    {
        a/=10;
    }
    printf("%f",a);

    return 0;
}