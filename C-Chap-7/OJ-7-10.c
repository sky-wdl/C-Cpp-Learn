//
// Created by Dongliu_Wen on 2022/11/19.
//
/*
 * 方阵乘法运算
【问题描述】
    从键盘输入一个正整数n（n∈1,10]），表示进行乘法运算的两个整形方阵的阶。然后分别输入两个整形方阵A和B，计算A*B后将结果输出到屏幕。

【输入形式】
    从键盘输入一个正整数，然后再输入两个整形方阵。
【输出形式】
    在屏幕上输出两个整形方阵的乘积。
【输入样例】

3
1 1 1
3 3 3
6 6 6
9 9 9
6 6 6
5 5 5
【输出样例】

########20########20########20
########60########60########60
#######120#######120#######120
【样例说明】

首先输入正整数3,说明接下来要输入的方阵是3×3的。因为

1 1 1       9 9 9       20  20  20
3 3 3   ×   6 6 6   =    60  60  60
6 6 6       5 5 5       120 120 120
所以在屏幕上打印：

########20########20########20
########60########60########60
#######120#######120#######120
注："#"代表空格，每个输出的整数占10位，不足10位在整数的左边用空格补足。
 */

#include <stdio.h>

int main(void)
{
    int matrixSize;
    scanf("%d",&matrixSize);
    int matrixOne[matrixSize][matrixSize];
    int matrixTwe[matrixSize][matrixSize];

    /*
     * 第一个矩阵
     */
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            scanf("%d",&matrixOne[i][j]);
        }
    }

    /*
     * 第二个矩阵
     */
    for (int i = 0; i < matrixSize; ++i)
    {
        for (int j = 0; j < matrixSize; ++j)
        {
            scanf("%d",&matrixTwe[i][j]);
        }
    }

    /*
     * 两个矩阵进行相乘操作并输出
     */
    for (int i = 0; i < matrixSize; ++i,printf("\n"))//控制行
    {
        for (int k = 0; k < matrixSize; ++k)//控制列
        {
            int sum = 0;
            for (int j = 0; j < matrixSize; ++j)//控制行列中的具体元素进行相乘操作，每项相乘求和保存到sum中。
            {
            sum += matrixOne[i][j] * matrixTwe[j][k];
            }
            printf("%10d", sum);
        }
    }

    return 0;
}