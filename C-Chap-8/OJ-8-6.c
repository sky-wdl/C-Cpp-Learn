//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 * 字符串排序：
【问题描述】

字符串排序：输入 5 个字符串，按由小到大的顺序输出。试编写相应程序。

【输入形式】
【输出形式】
【样例输入】

wuhan

shanghai

beijng

tianjing

guangzhou
【样例输出】

beijing

guangzhou

shanghai

tianjing

wuhan
【样例说明】

输入5个字符串，按照升序排序输出
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    /*
     * 设置字符型指针数组，用于储存五个字符数组的地址
     */
    char *s[5];


    /*
     * 声明五个字符数组，用于存放用户输入的五组字符串
     */
    char s1[20];
    char s2[20];
    char s3[20];
    char s4[20];
    char s5[20];


    /*
     * 指针数组与字符数组进行地址绑定
     */
    s[0] = s1;
    s[1] = s2;
    s[2] = s3;
    s[3] = s4;
    s[4] = s5;


    /*
     * 循环读入用户输入的五组字符串
     */
    for (int i = 0; i < 5; ++i)
    {
        scanf("%s",s[i]);
    }


    /*
     * 定义临时字符型指针temp，用于传递数组数组
     * 进行字符串大小比较，同时交换位置
     */
    char *temp;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if(strcmp(s[j], s[j+1]) > 0)
            {
                temp = s[j+1];
                s[j+1] = s[j];
                s[j] = temp;
            }
        }
    }


    /*
     * 按顺序打印排序好的五组字符串
     */
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n",s[i]);
    }

    return 0;
}