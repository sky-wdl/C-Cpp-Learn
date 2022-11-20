//
// Created by Dongliu_Wen on 2022/11/19.
//
/*
 *
 */
/*
 * 找出不是两个数组共有的元素。
【问题描述】

找出不是两个数组共有的元素。输入一个正整数 n (1<n≤10)，再输入 n 个整

数，存入第 1 个数组中；然后输入一个正整数 m (1<m≤10)，再输入 m 个整数，存入第 2

个数组中，找出所有不是这两个数组共有的元素。试编写相应程序。


【输入形式】
【输出形式】
【样例输入】

3

13 14 15

4

23 14 19 15
【样例输出】

13 23 19
 */
#include <stdio.h>

int main()
{
    /*
     * 定义变量，用于接收用户输入的第一个数组的大小
     * 根据用户输入的数组大小数据，声明一个对应的数组
     * 同时接收用户输入的数据
     */
    int arrayOneSize;
    scanf("%d",&arrayOneSize);
    int arrayOne[arrayOneSize];

    for (int i = 0; i < arrayOneSize; ++i)
    {
        scanf("%d",&arrayOne[i]);
    }

    /*
     * 定义变量，用于接收用户输入的第二个数组的大小
     * 根据用户输入的数组大小数据，声明一个对应的数组
     * 同时接收用户输入的数据
     */
    int arrayTweSize;
    scanf("%d",&arrayTweSize);
    int arrayTwe[arrayTweSize];

    for (int i = 0; i < arrayTweSize; ++i)
    {
        scanf("%d",&arrayTwe[i]);
    }

    /*
     * 循环判断第一组与第二组的数组元素，将第一组中不是共有的元素打印输出
     */
    for (int i = 0; i < arrayOneSize; ++i)
    {
        int sign = 1;
        for (int j = 0; j < arrayTweSize; ++j)
        {
            if(arrayOne[i] == arrayTwe[j])
            {
                sign = 0;
                break;
            }
        }
        if(sign)
            printf("%d ",arrayOne[i]);
    }

    /*
     * 循环判断第二组与第一组的数组元素，将第二组中不是共有的元素打印输出
     */
    for (int i = 0; i < arrayTweSize; ++i)
    {
        int sign = 1;
        for (int j = 0; j < arrayOneSize; ++j)
        {
            if(arrayOne[j] == arrayTwe[i])
            {
                sign = 0;
                break;
            }
        }
        if(sign)
            printf("%d ",arrayTwe[i]);
    }

    return 0;
}