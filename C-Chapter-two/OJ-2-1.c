//
// Created by Dongliu_Wen on 2022/10/4.
//
/*
 * 1. 求整数均值
输入3个整数，计算并输出他们的和与平均值，其中平均值精确到小数点后1位。

【输入】 3 4 6

【输出】13 4.3
 */

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d %.1f", a + b + c, (a+b+c)/3.0);


    return 0;
}
