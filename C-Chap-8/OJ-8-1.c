//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 *计算两数的和与差。
【问题描述】

计算两数的和与差。要求自定义函数sum_diff(double op1, double op2, double ∗psum, double ∗pdiff)，实现计算两个数的和与差，其中op1和op2是需要计算的两个数，psum和 pdiff指向的变量保存计算得出的和与差。（结果保留1位小数）

【输入形式】


【输出形式】


【样例输入】

2 3
【样例输出】

5 -1
 */

#include <stdio.h>


void sum_diff(double op1, double op2, double *psum, double *pdiff);
int main(void)
{
    double numberOne, numberTwe, sum, diff;
    scanf("%lf%lf",&numberOne, &numberTwe);
    sum_diff(numberOne,numberTwe, &sum, &diff);
    printf("%.1f %.1f",sum,diff);

    return 0;
}

void sum_diff(double op1, double op2, double *psum, double *pdiff)
{
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}