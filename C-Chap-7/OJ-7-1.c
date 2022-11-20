//
// Created by Dongliu_Wen on 2022/11/15.
//
/*
 * 求一维数组的最大值及其下标
【问题描述】求一维数组的最大值及其下标：输入一个正整数n（1<n<=10），再输入n个整数，输出最大值及其对应的下标，下标从0开始。试编写相应程序。【输入形式】
【输出形式】
【样例输入】

8

65 12 36 45 87 66 15 81
【样例输出】87 4
 */

#include <stdio.h>
int main()
{
    int maxNumber=0, subscript=0,temp;

    scanf("%d",&temp);

    for (int i = 0; i < temp; ++i) {
        scanf("%d",&temp);
        if(i==0)
        {
            maxNumber=temp;
        }
        else if(maxNumber<temp)
        {
            maxNumber=temp;
            subscript=i;
        }
    }
    printf("%d %d",maxNumber,subscript);

    return 0;
}