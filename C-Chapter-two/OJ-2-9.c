//
// Created by Dongliu_Wen on 2022/9/30.
//
/*
 * 【问题描述】

输入一个正整数 n，输出 2/1+3/2+5/3+8/5 +…的前 n 项之和，保留 2 位小数。

该序列从第 2 项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。

试编写相应程序。

【样例输入】

5
【样例输出】
8.39
 */

#include <stdio.h>
int main()
{
    int count,molecule=2,denominator=1,i,a;
    double x=0;
    scanf("%d",&i);
    for(count=0;count<i;count++)
    {
        x+=(double)molecule/(double)denominator;
        a=molecule+denominator;
        denominator=molecule;
        molecule=a;
    }
    printf("%.2f",x);

    return 0;
}