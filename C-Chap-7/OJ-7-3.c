//
// Created by Dongliu_Wen on 2022/11/15.
//
/*
 * 求两组整数的并集1
【问题描述】

从标准输入中输入两组整数(每组不超过20个整数，每组整数中元素不重复)，合并两组整数，重复的整数只出现一次，并按从大到小顺序排序输出（即两组整数集的"并集"）。

【输入形式】

首先输入第一组整数的个数，然后在下一行输入第一组整数，以一个空格分隔各个整数；再在新的一行上输入第二组整数的个数，然后在下一行输入第二组整数，以一个空格分隔。

【输出形式】

按从大到小顺序排序输出合并后的整数集（以一个空格分隔各个整数，最后一个整数后的空格可有可无）。

【样例输入】

8
5  105  4  32  8  7  9  -60
5
5  2  87  10  105

【样例输出】

105   87   32   10   9   8   7   5   4   2   -60
【样例说明】

第一组整数有8个，分别为5   105   4   32   8   7   9   -60，第二组整数有5个，分别为5   2   87   10   105。将第一组和第二组整数合并（在两组整数中都出现的整数5和105只出现一次），并按从大到小顺序排序后结果为105   87   32   10   9   8   7   5   4   2   -60。
 */

#include <stdio.h>

int main(void)
{

    int array_1_quantity, array_2_quantity, array_3_quantity, temp;
    /*
     * 第一组数据的输入
     */
    scanf("%d",&array_1_quantity);
    int array_1[array_1_quantity];
    for (int i = 0; i < array_1_quantity; ++i)
    {
        scanf("%d",&array_1[i]);
    }


    /*
     * 第二组数据的输入
     */
    scanf("%d",&array_2_quantity);
    int array_2[array_2_quantity];
    for (int i = 0; i < array_2_quantity; ++i)
    {
        scanf("%d",&array_2[i]);
    }

    /*
     * 进行两组数据的合并工作
     */
    int array_3[array_1_quantity + array_2_quantity];

    /*
     * 将第一组数据读入数组
     */
    for (int i = 0; i < array_1_quantity; ++i)
    {
        array_3[i]=array_1[i];
    }

    /*
     * 将第二组数据读入数组，并同时进行查重操作
     */
    int a;
    for (array_3_quantity = array_1_quantity, a=0; a < array_2_quantity; ++a)
    {
        for (int j = 0; j < array_3_quantity; ++j)
        {
            if(array_3[j]==array_2[a])
                goto A;
        }
        array_3[array_3_quantity]=array_2[a];
        ++array_3_quantity;
        A:
        continue;
    }
    array_3[array_3_quantity]='\0';

    /*
     * 进行逆冒泡排序
     */
    for (int i = 0; i < (array_3_quantity-1); ++i) {
        for (int j = 0; j < (array_3_quantity - 1); ++j) {
            if(array_3[j] < array_3[j+1])
            {
                temp = array_3[j+1];
                array_3[j+1] = array_3[j];
                array_3[j] = temp;
            }
        }
    }

    /*
     * 循遍历数组3
     */
    for (int j = 0; j < array_3_quantity; ++j) {
        printf("%d ",array_3[j]);
    }

    return 0;
}