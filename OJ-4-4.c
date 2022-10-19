//
// Created by Dongliu_Wen on 2022/10/18.
//
/*
 * 【问题描述】

输入两个正整数 a 和 n，求 a+aa+aaa+aa…a(n个 a)之和。

例如，输入 2 和 3，输出 246（2 + 22 + 222）。试编写相应程序。


【样例输入】

2 3
【样例输出】
s=246
 */
#include <stdio.h>

int main()
{
    int number;
    int i;
    int sum=0;
    int a=0;
    scanf("%d %d",&number,&i);
    for (int n = 0; n < i; ++n)
    {
        sum*=10;
        sum+=number;
        a+=sum;
    }
    printf("s=%d",a);

    return 0;
}