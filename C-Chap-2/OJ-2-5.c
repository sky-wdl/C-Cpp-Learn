//
// Created by Dongliu_Wen on 2022/9/28.
//
/*
 * 5. 分段函数求值
有一个函数y=f(x)的表达式如下：

当x<1时，y=x

当1<=x<10时，y=2x-1

当x>=10时，y=3x-11

输入x的值，输出y相应的值。

末尾换行。


【输入形式】
一个实数
【输出形式】
y=计算的结果，保留2位小数，注意末尾换行。
【样例输入】

5.1

【样例输出】

y=9.20
 */

#include <stdio.h>

int main()
{
    float a=0;
    scanf("%f",&a);
    if (a<1.0)
    {
        printf("y=%.2f",a);
    }
    else if (a>=1.0 && a<10.0)
    {
        printf("y=%.2f",2*a-1.0);
    }
    else
    {
        printf("y=%.2f",3*a-11.0);
    }

    return 0;
}