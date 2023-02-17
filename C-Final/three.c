//
// Created by Administrator on 2023/2/17.
//
#include <stdio.h>

int main(void)
{
    int n;
    int mini = 0;
    int x = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; ++i) {
        array[i] = 0;
    }

    for (int i = 0; i < n; ++i) {
        scanf("%d",&array[i]);
    }

    mini = array[0];
    for (int i = 1; i < n; ++i) {
        if(array[i] <= mini)
        {
            mini = array[i];
            x = i;
        }
    }

    for (int i = 0; i <= n; ++i) {
        if( i != x && i != n) {
            printf("%d ",array[i]);
        }
    }
    printf("%d",array[x]);

    return 0;
}