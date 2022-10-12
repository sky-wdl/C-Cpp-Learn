#include<stdio.h>
int gcd(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}