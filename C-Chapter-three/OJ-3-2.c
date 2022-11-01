//
// Created by Dongliu_Wen on 2022/10/10.
//
/*
 * 【问题描述】

编写一个程序，用户输入若干个整数，试找出其中的最大数和最小数。
【输入形式】

用户在第一行待输入数据个数，在第二行输入数据。
【输出形式】

程序在下一行输出数据的最大值和最小值
【样例输入】

 5
 89 62 96 74 52
【样例输出】

96 52
【样例说明】

用户第一次输入的为数据个数，在下一行依次输入数据。输出为5个数中的最大值和最小值，输出时候两个数之间用空格分隔。
 */

#include <stdio.h>

float max(const float a[], int count)
{
    float num=a[0];
    for (int i = 0; i < count; ++i)
    {
        if(num<a[i])num=a[i];
    }

    return num;
}

float mini(const float a[], int count)
{
    float num=a[0];
    for (int i = 0; i < count; ++i)
    {
        if(num>a[i])num=a[i];
    }

    return num;
}

int main()
{
    int quantity=0;
    scanf("%d",&quantity);
    float number[quantity];
    for (int i = 0; i < quantity; ++i)
    {
        scanf("%f",&number[i]);
    }
    printf("%.f %.f",max(number,quantity),mini(number,quantity));

    return 0;
}