//
// Created by Dongliu_Wen on 2023/1/1.
//
/*
 * 水仙花数
【问题描述】

编写一个程序，输入一个正整数N(N大于等于500小于等于999)，求出100~N之间的所有水仙花数。所谓的水仙花数是：如果一个三位数的个位数、十位数、百位数的立方和等于该数自身，就称这个数为水仙花数。

【输入形式】

输入一个正整数N。
【输出形式】

输出从100到N之间的所有水仙花数，每3个数一行，每个数占4位字符。

【样例输入】

600
【样例输出】

#153#370 #371

#407
 */

#include <stdio.h>
#include <math.h>

int a(int inNum);
int main(void)
{
    int inNum = 0;
    int cnt = 0;//计数器

    scanf("%d",&inNum);

    for (int i = 100; i <= inNum; ++i)
    {
        if(a(i) == 1)
        {
            if(cnt != 3)
            {
                printf("%4d",i);
                cnt++;
            }
            else
            {
                printf("\n%4d",i);
                cnt = 1;
            }
        }
    }

    return 0;
}

int a(int inNum)
{
    int sign = 0;
    int sum = 0;
    int temp = inNum;

    while(temp != 0)
    {
        sum += (int)(powf((float)(temp%10),3));
        temp/=10;
    }
    if(inNum == sum)
        sign = 1;

    return sign;
}