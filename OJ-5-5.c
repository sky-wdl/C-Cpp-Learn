//
// Created by Dongliu_Wen on 2022/10/26.
//
/*
 * 递归实现求 Fabonacci 数列：
【问题描述】

递归实现求 Fabonacci 数列：用递归方法编写求斐波那契数列的函数，返回值为整型，并 写出相应的主函数。斐波那契数列的定义为： f(0) = 0，f(1) = 1 f(n) = f(n - 2) + f(n - 1) （n＞1）

【输入形式】

整数
【输出形式】

整数
【样例输入】

4
【样例输出】

3
 */
#include <stdio.h>

int fabonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    return fabonacci(n-2)+ fabonacci(n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fabonacci(n));

    return 0;
}
