//
// Created by Dongliu_Wen on 2022/12/19.
//
/*
 *  时间换算：
【问题描述】

时间换算：用结构类型表示时间内容（时间以时、分、秒表示），输入一个时间数值， 再输入一个秒数 n，以 h:m:s 的格式输出该时间再过 n 秒后的时间值(超过 24 点就 从 0 点开始计时)。试编写相应程序。

【输入形式】

时：分：秒

间隔秒数
【输出形式】

时：分：秒


【样例输入】

11:10:10

10

【样例输出】

11:10:20
 */

#include <stdio.h>

int main(void)
{
    int h, m, s, second = 0, minute = 0, hour = 0;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d",&second);

    minute = second / 60;
    second %= 60;

    hour = minute / 60;
    minute %= 60;

    if((s += second) >= 60)
    {
        m += (s /60);
        s %= 60;
    }
    if((m += minute) >= 60)
    {
        h += (m / 60);
        m %= 60;
    }
    if((h += hour) >= 24)
    {
        h %= 24;
    }

    printf("%d:%d:%d",h, m, s);

    return 0;
}