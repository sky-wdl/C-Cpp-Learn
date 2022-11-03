//
// Created by Dongliu_Wen on 2022/10/30.
//
/*
 *  统计输入中空格、制表符及回车符的个数（cexam3a.c）
【问题描述】

分别统计标准输入中空格、制表符及回车符的个数（输入以Ctrl-Z结束）。
【输入形式】

从标准输入中读取字符，可以包含任意字符。输入以Ctrl-Z结束。
【输出形式】

分别输出输入字符中空格，制表符和回车符的个数，相邻数字之间用一个空格区分，输出末尾没有空格。
【样例输入】

C lanuage is very important.   HAHAHAHAHAA.....
HAHAHAHAHAH
HAHAHA
【样例输出】

4 3 3
【样例说明】

字符串中共有4个空格，3个制表符（注意在这里important后面的句点和HAHAHAHAHAA之间有3个制表符，但是在这里显示得并不明显。），以及3个回车，所以输出4 3 3
 */
#include "stdio.h"

int main(void)
{
    int space=0,tab=0,enter=0;
    int c;
    while((c=getchar())!=-1)
    {
        switch(c)
        {
            case 32:space++;break;
            //空格
            case 9:tab++;break;
            //水平制表符
            case 10:enter++;break;
            //换行符
            case 13:enter++;break;
            //回车键
        };
    }
    printf("%d %d %d",space,tab,enter);

    return 0;
}