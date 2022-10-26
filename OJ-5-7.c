//
// Created by Dongliu_Wen on 2022/10/26.
//
/*
 * 空心金字塔
【问题描述】调用子函数 void digitalPyramid( int n )实现输出n行空心的数字金字塔。

【输入形式】其中n是main函数中用户输入的参数，为[1, 9]的正整数。要求函数按照如样例所示的格式打印出n行空心的数字金字塔

【输出形式】
【样例输入】5
【样例输出】image.png

【样例说明】请注意，最后一行的第一个数字前没有空格。
 */
#include <stdio.h>

void digitalPyramid(int n);
int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        a+=2;
    }
    digitalPyramid(a);

    return 0;
}
void digitalPyramid(int n)
{
    for(int i=n,a=1;i>=1;i-=2,a++)
    {
        if(i==n)
        {
            for(int n=0;n<(i-1)/2;n++)
            {
                printf(" ");
            }
            printf("%d\n",a);
        }
        else if(i==1)
        {
            for(int i=0;i<n;i++)
            {
                printf("%d",a);
            }
            break;
        }
        else
        {
            for (int n = 0; n < (i - 1) / 2; n++) {
                printf(" ");
            }
            printf("%d", a);
            for (int a = 0; a < n-i-1; a++) {
                printf(" ");
            }
            printf("%d\n", a);
        }
    }
}