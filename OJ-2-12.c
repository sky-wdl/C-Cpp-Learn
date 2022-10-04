//
// Created by Dongliu_Wen on 2022/9/30.
//
/*
 * 12. 最大公约数
【问题描述】

 输入一对正整数 a,b（0<a，b<100000000），求其最大公约数。

【输入样例】

12 18
【输出样例】

6

【输出样例】

319 377
【输出样例】

29
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,for_count=1,num;
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        c=b;
    }
    else
    {
        c=a;
    }
    for(;for_count<=c;for_count++)
    {
        if(c%for_count==0)
        {
            if(b%for_count==0)
            {
                num=for_count;
            }
        }
    }

    return 0;
}