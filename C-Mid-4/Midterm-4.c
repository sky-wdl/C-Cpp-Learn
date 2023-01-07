//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 各列之和
【问题描述】

求矩阵各行元素之和。输入 2 个正整数 m 和 n (1≤m, n≤6)，然后输入该 m 行 n 列矩阵 a 中的元素，求各列元素之和并依次输出。

【输入形式】
【输出形式】

n个整数以1个空格间隔
【样例输入】

3 4

1 2 3 4

1 2 3 4

1 2 3 4
【样例输出】

3 6 9 12
 */

#include <stdio.h>

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);

    int column[n];
    for (int i = 0; i < n; ++i)
    {
        column[i] = 0;
    }

    for (int i = 0, j = 0; i < m * n; ++i, ++j)
    {
        int temp;
        scanf("%d", &temp);
        if(j == 4)
            j = 0;

        column[j] += temp;
    }

    printf("%d %d %d %d",column[0] ,column[1], column[2], column[3]);

    return 0;
}