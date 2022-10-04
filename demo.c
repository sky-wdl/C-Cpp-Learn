//
// Created by Dongliu_Wen on 2022/9/28.
//
#include <stdio.h>

int pow2(int m, int n)
{
    int i = 1;
    int result = 1;

    if (n == 0)
    {
        return result;
    }
    else
    {
        for (i = 1; i <= n; i++) {
            result *= m;
        }
    }
    return result;
}

int main()
{
//    double x 0;

    printf("%d", pow2(-1,3));

    return 0;
}

