//
// Created by Dongliu_Wen on 2022/10/19.
//
/*
 * 回文数A
【问题描述】

所谓"回文数"是指具有如下性质的整数：一个整数，当它的各位数字逆序排列，形成的整数与原整数相同，这样的数称为回文数。例如，素数11，373，其各位数字对换位置后仍然为11，373，因此这两个整数均为回文数。编写函数int loop(int x)，判断一个整数是否为回文数，如果x是回文数则返回1，否则返回0。编写程序loop.c，接收控制台输入的两个整数a，b。调用loop函数输出a到b之间（包括a和b）的所有为偶数的回文数。
【输入形式】

控制台输入两个整数a和b（必有a<b），以空格分隔。
【输出形式】

输出有若干行，每行有一个a和b之间的回文数。输出各行上的数字不重复，且从小至大依次按序输出。
【样例输入】

3 120
【样例输出】

4
6
8
22
44
66
88
【样例说明】

输入整数a=3，b=120，要求输出所有[3, 120]之间的为偶数的回文数。按升序分行输出所有符合题意的整数。


 */
#include <stdio.h>

int loop(int x)
{
    int loopNumber=0;
    int a=x;
    while(x!=0)
    {
        loopNumber=loopNumber*10+x%10;
        x/=10;
    }
    if(loopNumber==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; ++i)
    {
        if(loop(i) && i%2==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}