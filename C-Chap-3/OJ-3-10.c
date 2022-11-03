//
// Created by Dongliu_Wen on 2022/10/12.
//
/*
 * 译密码
写程序将字符串“China”译成密码，密码规律是：用原来的字母后面第四个私募代替原来的字母。例如，字母A后面第四个字母是E，用E代替A。因此，China应译为Glmre。

请编写一个程序，用赋初值的方法使c1, c2, c3, c4, c5这5个字符变量的值分别为'C', 'h', 'i', 'n', 'a'，经过运算，使c1, c2, c3, c4, c5的值分别变为'G', 'l', 'm', 'r', 'e'

用printf函数输出这5个字符


【输入形式】
无
【输出形式】
Glmre，注意末尾的换行
【样例输入】

无

【样例输出】

Glmre
 */
#include <stdio.h>

int main()
{
    char c1='C',c2='h',c3='i',c4='n',c5='a';
    printf("%c%c%c%c%c",c1+4,c2+4,c3+4,c4+4,c5+4);

    return 0;
}