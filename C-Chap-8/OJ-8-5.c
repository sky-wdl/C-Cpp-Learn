//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 * 使用函数实现字符串复制：
【问题描述】

使用函数实现字符串复制：输入一个字符串 t 和一个正整数 m，将字符串 t 中从第 m 个字符开始的全部字符复制到字符串 s 中，再输出字符串 s。要求自定义并调用函数 void strmcpy(char *s, char *t, int m)。试编写相应程序。

【输入形式】
【输出形式】
【样例输入】

abcdefg

3
【样例输出】

cdefg
 */

#include <stdio.h>

void strmcpy(char *s, char *t, int m);
int main(void)
{
    char str[20], s[20];
    int number;
    scanf("%s",str);
    scanf("%d",&number);
    strmcpy(s, str, number);

    return 0;
}
void strmcpy(char *s, char *t, int m)
{
    t += (m - 1);
    while (*t != '\0')
    {
        *s = *t;
        printf("%c", *s);
        s++;
        t++;
    }
}