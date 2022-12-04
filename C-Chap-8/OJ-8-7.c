//
// Created by Dongliu_Wen on 2022/11/23.
//
/*
 *  3 个字母移到最后
【问题描述】

输入一个字符串，把该字符串的前 3 个字母移到最后，输出变换后的字符串。比如输入 “abcdef”，输出为“defabc”。

【输入形式】
【输出形式】
【样例输入】

abcdef
【样例输出】

defabc
 */

#include <stdio.h>

int main(void)
{
    int i=3;
    char str[20];
    scanf("%s",str);

    while(str[i]!='\0')
    {
        putchar(str[i]);
        ++i;
    }
    for (int j = 0; j < 3; ++j)
    {
        putchar(str[j]);
    }
    return 0;
}