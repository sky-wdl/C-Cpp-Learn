//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * 合并字符串
【问题描述】
编写一个函数void  str_bin(char str1[ ], char str2[ ])， str1、str2是两个有序字符串（其中字符按ASCII码从小到大排序），将str2合并到字符串str1中，要求合并后的字符串仍是有序的，允许字符重复。在main函数中测试该函数：从键盘输入两个有序字符串，然后调用该函数，最后输出合并后的结果。
【输入形式】
分行从键盘输入两个有序字符串（不超过100个字符）
【输出形式】
输出合并后的有序字符串
【输入样例】

aceg
bdfh
【输出样例】

abcdefgh
【样例说明】
输入两个有序字符串aceg和bdfh，输出合并后的有序字符串abcdefgh
 */

#include <stdio.h>

void  str_bin(char str1[], char str2[]);
int main(void)
{
    char str1[101] = {'\0'};
    char str2[101] = {'\0'};
    scanf("%s%s",str1,str2);
    str_bin(str1,str2);

    return 0;
}

void  str_bin(char str1[], char str2[])
{
    int str1Size;
    int j = 0;
    str1Size = 0;
    while(str1[str1Size] != '\0')
    {
        str1Size++;
    }
    while(str2[j] != '\0')
    {
        str1[str1Size] = str2[j];
        str1Size++;
        j++;
    }

    for (int i = 0; i < str1Size; ++i)
    {
        char temp;
        for (int k = i + 1; k < str1Size; ++k)
        {
            if(str1[i] > str1[k])
            {
                temp = str1[k];
                str1[k] = str1[i];
                str1[i] = temp;
            }
        }
    }

    puts(str1);
}
