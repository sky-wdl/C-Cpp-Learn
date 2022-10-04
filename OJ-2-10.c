//
// Created by Dongliu_Wen on 2022/9/30.
//
/*
 * 10. 求 1-3+5-7+……2*n-1
【问题描述】

求 1-3+5-7+……2*n-1

【输入形式】

N
【输出形式】

sum=XX
【样例输入】

3
【样例输出】

sum=3
 */

#include <stdio.h>

int pow2(int x,int y)
{
    int i=0,a=1;
    if(y==0)
    {
        return 1;
    }
    for (; i < y; ++i)
    {
        a*=x;
    }

    return a;
}

int main()
{
    int N,i,a,x=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        a=pow2(-1,i+1);
        x+= a*(i*2.0-1.0);
    }

    printf("%d",x);

    return 0;
}