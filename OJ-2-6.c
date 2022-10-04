//
// Created by Dongliu_Wen on 2022/9/29.
//
/*
 * 6. 求交错序列前n项和
计算：1/1-2/3+3/5-4/7+5/9-6/11+...的前n项（小数点后保留5位）
 */

#include <stdio.h>

int pow2(int m, int n)
{
    int i = 1;
    int result = 1;

    if (n == 0)
    {
        return result;
    }
    else
    {
        for (i = 1; i <= n; i++) {
            result *= m;
        }
    }
    return result;
}

int main()
{
    int a,i;
    float x=0;
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        int b=pow2(-1,i+1);
        x=x+ (float)b*(float)i/((float)i*2-1);
    }
    printf("%.5f",x);

    return 0;
}