//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 1. 最小差值
【问题描述】

 给定n（2≤ n ≤50)个数，请找出其中相差（差的绝对值）最小的两个数，输出它们的差值的绝对值。

【输入形式】

 输入第一行包含一个整数n。
 第二行包含n个正整数，相邻整数之间使用一个空格分隔。

【输出形式】

 输出一个整数，表示答案。

【样例输入】

5
1 5 4 8 20

【样例输出】

1
【样例说明】

 相差最小的两个数是5和4，它们之间的差值是1。
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int mini;
    scanf("%d",&n);
    int num[n];

    for (int i = 0; i < n; ++i)
    {
        scanf("%d",&num[i]);
    }
    mini = abs(num[0] - num[1]);

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if(abs(num[i] - num[j]) < mini)
                mini = abs(num[i] - num[j]);
        }
    }

    printf("%d",mini);

    return 0;
}


