//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 *计算公式：求cosx
【问题描述】

已知cosx的近似计算公式如下：

cosx = 1 - x^2/2! + x^4/4! - x^6/6! + ... + (-1)^nx^2n/(2n)!

 其中x为弧度，n为大于等于0的整数。编写程序根据用户输入的x和n的值，利用上述近似计算公式计算cosx的近似值，要求输出结果小数点后保留8位。

【输入形式】

从控制台输入小数x（0<=x<=10）和整数n（0<=n<=1000），两数中间用空格分隔。

【输出形式】

控制台输出公式结果：小数点后保留8位。

【样例输入1】

1.0472  3
【样例输出1】

0.49996244
【样例输入2】

1.0472  49
【样例输出2】

0.49999788
【样例说明】

输入x为1.0472，n为3，求得cosx近似计算公式的值为0.49996244，小数点后保留8位；同样，输入x为1.0472，n为49，求得cosx近似计算公式的值为0.49999788，小数点后保留8位。

注意：为保证数据的准确性和一致性，请使用double数据类型保存计算结果。
 */
#include <stdio.h>
#include <math.h>

int factorial(int number);
int main(void)
{
    float radian;
    int n;
    double sum = 0;
    scanf("%f%d",&radian, &n);

    for (int i = 0; i <= n; ++i)
    {
        //cosx = 1 - x^2/2! + x^4/4! - x^6/6! + ... + (-1)^n * x^2n/(2n)!
        sum += pow(-1,i) * pow(radian,i * 2) / (double)factorial(i * 2);
    }
    printf("%.8lf",sum);

    return 0;
}

int factorial(int number)
{
    long int sum = 1;
    int sign = 1;

    /*
     * 判断用户输入的数是否为负数
     */
    if (number < 0)
        sign = -1;
    else if(number == 0)
        goto A;

    for (int i = 1; i <= number; ++i)
    {
        sum *= i;
    }

    A:
    return sign * sum;
}
