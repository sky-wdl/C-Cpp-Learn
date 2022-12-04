//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 * 删除字符：
【问题描述】

删除字符： 输入一个字符串，再输入一个字符 ch，将字符串中所有的 ch 字符删除后输 出该字符串。要求定义和调用函数 delchar(s,c)，该函数将字符串 s 中出现的所有 c 字符 删除。试编写相应程序。

【输入形式】

字符串

字符
【输出形式】

字符串


【样例输入】

asdasd

s

【样例输出】

adad
 */

#include <stdio.h>

void delchar(char *s, char c);
int main(void)
{
    char str[50], c;
    scanf("%s",str);
    for (int i = 0; i < 2; ++i)
    {
        scanf("%c", &c);
    }
    delchar(str, c);

    return 0;
}

void delchar(char *s, char c)
{
    while(*s != '\0')
    {
        if(*s != c)
        {
            printf("%c",*s);
        }
        s++;
    }
}