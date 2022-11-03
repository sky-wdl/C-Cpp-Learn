//
// Created by Dongliu_Wen on 2022/10/30.
//
/*
 *  数值变换
【问题描述】
编写一个程序，从键盘输入输入一个三位正整数，然后反向输出对应的数，如果输入的数不是三位正整数，则输出－1。
【输入形式】
从键盘输入三位的正整数。
【输出形式】
输出交换后的正整数值。
【输入样例】

356
【输出样例】

653
【样例说明】
从键盘输入的正整数值为356，将该数的个位与百位互换，所得结果为653.如果输入的正整数为300，则输出为3。
 */
#include <stdio.h>

void abc(int n);
int main(void)
{
    int a;
    scanf("%d",&a);
    if(a<=999 && a>=100)
    {
        abc(a);
    }
    else
    {
        printf("-1");
    }

    return 0;
}

void abc(int n)
{
    int a=0;
    while(n!=0)
    {
        a=a*10+(n%10);
        n/=10;
    }
    printf("%d",a);
}