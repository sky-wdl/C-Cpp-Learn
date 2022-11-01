//
// Created by Dongliu_Wen on 2022/9/30.
//
/*
 * 11. 平方根求和
输入一个正整数n，求1+根号2+...+根号n。保留2位小数。例如：输出sum=22.47（book Page 43，第5小题。）
 */

#include <stdio.h>
#include <math.h>


int main()
{
    int N,for_count=1;
    double x=0;
    scanf("%d",&N);
    for(;for_count<=N;for_count++)
    {
        x+=sqrt((double)for_count);
    }

    printf("sum=%.2f",x);

    return 0;
}