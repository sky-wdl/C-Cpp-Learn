//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 字符串中字符排序
【问题描述】

编写一个程序，从键盘接收一个字符串（字符不重复），然后按照字符顺序从小到大进行排序。
【输入形式】

用户在第一行输入一个字符串。
【输出形式】

程序按照字符(ASCII)顺序从小到大排序字符串
【样例输入】

efgdbac
【样例输出】

abcdefg
【样例说明】

程序对其进行按从小到大(ASCII)顺序排序
 */
#include <stdio.h>

int main(void)
{
    char str[25] = {'\0'};
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        for (int j = i; str[j] != '\0'; ++j)
        {
            if((str[i] - str[j]) > 0)
            {
                char temp;
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }

    puts(str);

    return 0;
}



