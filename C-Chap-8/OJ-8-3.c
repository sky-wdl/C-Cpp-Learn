//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 * 字符串加密
【问题描述】
有一个非常简单的给字符串加密的方法，即给字符串中每个字母或数字符加上一个固定的正整数得到相应加密字符，字符串中其它字符不变。读入一个小于20的正整数和一个字符串，将其加密，输出加密后的字符串。
【输入形式】
从键盘输入一个整数，再输入一个字符串
【输出形式】
输出加密后的字符串
【样例输入】

2 Hello
【样例输出】

Jgnnq
 */

#include <stdio.h>

int main(void)
{
    int move, i = 0;
    char str[50];
    scanf("%d%s", &move,str);

    while(str[i] != '\0')
    {
        printf("%c", (str[i] + move));
        ++i;
    }

    return 0;
}