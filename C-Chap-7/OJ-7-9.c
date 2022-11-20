//
// Created by Dongliu_Wen on 2022/11/19.
//
/*
 *将数组中的数逆序存放。
【问题描述】

将数组中的数逆序存放。输入一个正整数 n (1<n≤10)，再输入 n 个整数，存入

数组 a 中，先将数组 a 中的这 n 个数逆序存放，再按顺序输出数组 a 中的 n 个元素。试编写

相应程序。


【输入形式】
【输出形式】
【样例输入】

5

1 2 3 4 5
【样例输出】

5 4 3 2 1
 */

#include <stdio.h>

int main(void)
{
    int arraySize;
    scanf("%d",&arraySize);
    int array[arraySize];

    for (int i = 0; i < arraySize; ++i)
    {
        scanf("%d",&array[i]);
    }

    for (int i = arraySize - 1; i >= 0 ; --i)
    {
        printf("%d ",array[i]);
    }

    return 0;
}