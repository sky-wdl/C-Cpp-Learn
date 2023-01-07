//
// Created by Dongliu_Wen on 2023/1/1.
//
/*
 * 求公式近似值A
【问题描述】

已知e^x的近似值可由下面公式计算得出：

e^x=1 + x/1! + x^2/2! + x^3/3! + ...... + x^n/n!
给定x和一个精度值σ（0.00001<=σ<=1），求利用上述公式计算出的前后两个ex近似值之差的绝对值小于该精度时(|Xn - Xn-1| <= σ)的最小迭代步骤n（n>=1)。。

【输入形式】

从控制台输入整数x，和小数σ（0.00001<=σ<=1），用空格隔开。注意：x有可能为负数。

【输出形式】

向控制台输出求得的最小迭代步骤n。

【样例输入】

2   0.001
【样例输出】

10
【样例说明】

输入的x为2，精度值σ为0.001，即：求e2的近似值，利用上述公式求得：当n为8时，近似值为：7.387302，当n为9时，近似值为7.388713，两近似值之差的绝对值为0.001411，大于给定的精度值0.001，所以要继续计算。当n为10时，求得的近似值为7.388995，与n为9时求得的近似值之差的绝对值为0.000282，小于给定的近似值，故输出最小的迭代步骤n为10。

注意：为了保证计算精度，保存计算结果时请使用double数据类型。
 */

#include <stdio.h>
#include <math.h>

double calculation(int number, int i);
long int factorial(int number);

int main(void)
{
    int number = 0;
    int cnt = 0; //计数器
    double accuracy = 0;
    double difference;
    scanf("%d %lf",&number, &accuracy);
    difference = accuracy + 1; //使difference的值能够满足接下来的循环的执行条件

    for (int i = 1; accuracy < fabs(difference); ++i)
    {
        difference = calculation(number, i) - calculation(number, (i - 1));
        cnt = i;
    }
    printf("%d",cnt);

    return 0;
}

double calculation(int number, int i)
{
    double sum = 1;
    int sign = 1;

    /*
     * 判断用户输入的数是否为负数
     */
    if(number > 0);
    else if (number < 0)
        sign = -1;

    if(i);
    else
        goto A;

    for (int j = 1; j <= i; ++j)
    {
        sum += pow(number,j) / factorial((sign * j));
    }

    A:
    return sum;
}

long int factorial(int number)
{
    long int sum = 1;
    int sign = 1;

    /*
     * 判断用户输入的数是否为负数
     */
    if(number > 0);
    else if (number < 0)
        sign = -1;

    for (int i = 1; i <= number; ++i)
    {
        sum *= i;
    }

    return sign * sum;
}