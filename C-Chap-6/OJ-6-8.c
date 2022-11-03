//
// Created by Dongliu_Wen on 2022/11/9.
//
/*
 * 大奖赛评分A
【问题描述】

当前许多歌手大奖赛评分时，为了体现公平，在评委给出分数后统计平均得分时，都会去掉最高分和最低分。编写程序，读入评委打分（分数都是整数，评委人数大于等于5，小于等于50），去掉两个最高分和两个最低分，计算并输出平均得分（小数点后保留两位有效数字）。

【输入形式】

从控制台输入评委人数，然后在下一行输入评委的打分（以一个空格分隔的整数）。

【输出形式】

在标准输出上输出平均得分（小数点后保留两位有效数字）。

【输入样例】

15
90 98 99 100 92 97 98 95 91 90 100 92 93 98 90
【输出样例】

94.82
【样例说明】

输入评委打分有15个，去掉两个最高分100和100，两个最低分90和90，计算平均得分为：94.82。
 */

#include <stdio.h>

int main(void)
{
    int sum=0,number;
    scanf("%d",&number);
    int temp[number];
    for (int i = 0; i < number; ++i)
    {
        scanf("%d",&temp[i]);
        sum += temp[i];
    }
    for (int i = 0; i < number-1; ++i)
    {
        for (int j = 0,temp_t; j < number-1; ++j)
        {
            if(temp[j]>temp[j+1])
            {
                temp_t=temp[j+1];
                temp[j+1]=temp[j];
                temp[j]=temp_t;
            }
        }
    }
    printf("%.2f",(float)(sum-(temp[0]+temp[1]+temp[number-1]+temp[number-2]))/(float)(number-4));

    return 0;
}