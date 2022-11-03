//
// Created by Dongliu_Wen on 2022/10/11.
//
/*
 * 【问题描述】
已知一个球从高空落下时，每次落地后反弹至原高度的四分之一再落下。编写一个程序，从键盘输入整数n和m，求该球从n米的高空落下后，第m次落地时共经过的路程以及第m次落地后反弹的高度，并输出结果。
【输入形式】
从键盘输入整数n和m，以空格隔开。
【输出形式】
输出两行：
第一行输出总路程，保留小数点后两位；
第二行输出第m次落地后反弹的高度，保留小数点后两位。
【输入样例】

40 3
【输出样例】

65.00
0.63
 */

#include <stdio.h>

void count_n(float n,float m)
{
    float num=0,num_n=n;
    for (int i = 1; i < (int)m; ++i)
    {
        n=n/4;
        num=num+n*2;
    }

    printf("%.2f\n%.2f",num+num_n,n/4);
}

int main(void)
{
    float n=0,m=0;
    scanf("%f%f",&n,&m);
    count_n(n,m);
}