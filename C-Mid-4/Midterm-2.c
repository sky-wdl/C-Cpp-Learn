//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 2. 出现的次数
【问题描述】输入一行字符（长度不大于80），统计其中各大写字母出现的次数。

【输入形式】
【输出形式】各字符的统计间隔一个空格
【样例输入】A6BBCCxyYzEEE?

【样例输出】A(1) B(2) C(2) D(0) E(3) F(0) G(0) H(0) I(0) J(0) K(0) L(0) M(0) N(0) O(0) P(0) Q(0) R(0) S(0) T(0) U(0) V(0) W(0) X(0) Y(1) Z(0)
 */

#include <stdio.h>

int main(void)
{
    char s[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int temp = 0;
    int count[25] = {0};
    while((temp = getchar()) != 10)
    {
        if(temp >= 'A' && temp <= 'Z')
            count[temp - 'A']++;
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c(%d) ",s[i], count[i]);
    }
    return 0;
}
