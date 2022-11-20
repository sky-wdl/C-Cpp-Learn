//
// Created by Dongliu_Wen on 2022/11/16.
//
/*
 * 判断上三角矩阵。
【问题描述】

判断上三角矩阵。输入一个正整数 n (1≤n≤6)和 n 阶方阵 a 中的元素，如果 a 是上三角矩 阵，输出“YES”, 否则，输出“NO”。上三角矩阵指主对角线以下的元素都为 0 的矩阵，主对角 线为从矩阵的左上角至右下角的连线。试编写相应程序。【输入形式】
【输出形式】
【样例输入】

3

1 1 2

0 1 3

0 03
【样例输出】

YES
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    /*
     * 获取用户输入
     * 并定义对应大小的二维整型数组
     */
    int arraySize;
    scanf("%d",&arraySize);
    int array[arraySize][arraySize];

    /*
     * 读入矩阵的元素，并储存到数组中
     */
    for (int i = 0; i < arraySize; ++i)
    {
        for (int j = 0; j < arraySize; ++j)
        {
            scanf("%d",&array[i][j]);
            /*
             * 输入的时候即刻进行判断
             * 当下三角中的元素存在非0的情况时
             * 直接结束运行
             */
            if(j<i && array[i][j]!=0) {
                printf("NO");
                goto A;
            }
        }
    }

    /*
     * 下三角元素都为0，打印YES
     */
    printf("YES");

    A:
    return 0;
}