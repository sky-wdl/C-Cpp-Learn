//
// Created by Dongliu_Wen on 2023/2/17.
//
#include <stdio.h>

int N(int t);
int main(void) {
    int n = 0;
    float s = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; ++i) {
        s += 1.0 / N(i + 1);
    }

    printf("%.5f",s);

    return 0;
}
int N(int t)
{
    int n = 1;
    for (int i = 1; i <= t; ++i) {
        n = n * i;
    }

    return n;
}