//
// Created by Dongliu_Wen on 2022/11/18.
//
/*
 * 选择法排序。
【问题描述】

选择法排序。输入一个正整数 n (1<n≤10)，再输入 n 个整数，将它们从大到小排序后输出。

试编写相应程序。


【输入形式】
【输出形式】
【样例输入】

6

12 32 6 45 84 24
【样例输出】

84 45 32 24 12 6
 */

#include <stdio.h>

int main(void)
{
    /*
     * 接收用户输入的数据个数数据，出差呢在frequency中
     * 定义一个一维数组用于接收用户后续的输入
     */
    int frequency;
    scanf("%d",&frequency);
    int number[frequency];

    /*
     * 接收用户的输入
     */
    for (int i = 0; i < frequency; ++i)
    {
        scanf("%d",&number[i]);
    }

    /*
     * 选择排序
     */
    for (int i = 0; i < (frequency-1); ++i)
    {
        for (int j = i,temp; j < (frequency - 1); ++j)
        {
            if(number[i] < number[j+1])
            {
                temp = number[j+1];
                number[j+1] = number[i];
                number[i] = temp;
            }
        }
    }

    /*
     * 打印输出
     */
    for (int i = 0; i < frequency; ++i)
    {
        printf("%d ",number[i]);
    }



    return 0;
}