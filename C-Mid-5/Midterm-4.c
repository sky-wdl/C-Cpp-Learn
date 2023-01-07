//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 用结构体求两个分数之差
【问题描述】

用结构体求两个分数之差。



定义结构体类型, 名为分数 fraction

整型成员：分子、分母

 变量：分数1、分数2

提示：输入分数时要化简，如果结果时整数 则输出整数。第1个分数比第2个大。



【输入形式】

【输出形式】
【样例输入】

1/2 1/4

【样例输出】

1/4
 */

#include <stdio.h>

typedef struct fraction{
    int fenzi;
    int fenmu;
}fraction;

int main(void)
{
    fraction a1, a2;
    int fenzi;
    int fenmu;
    scanf("%d/%d%d/%d",&a1.fenzi, &a1.fenmu, &a2.fenzi, &a2.fenmu);
    fenzi = (a1.fenzi * a2.fenmu) - (a2.fenzi * a1.fenmu);
    fenmu = a1.fenmu * a2.fenmu;
    for (int i = fenzi; i > 1; ++i)
    {
        if(fenzi % i == 0 && fenmu % i == 0)
        {
            fenzi /= i;
            fenmu /= i;
            break;
        }
    }
    if(fenzi % fenmu == 0)
        printf("%d", fenzi / fenmu);
    else
        printf("%d/%d",fenzi, fenmu);

    return 0;
}