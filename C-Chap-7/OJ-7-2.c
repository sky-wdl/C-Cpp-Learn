//
// Created by Dongliu_Wen on 2022/11/15.
//
/*
 * 求3行5列二维数组中每列数组元素的最小值，并输出列下标为3的这一列的最小值。
【问题描述】
【输入形式】-3 -1 -5 -7 -9

                     -8 -6 -4 -2 -8

                     -2 -3 -4 -5 -6
【输出形式】-7
 */

#include <stdio.h>

int main(void)
{
    int miniNumber=0,array[3][5];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            scanf("%d",&array[i][j]);
            if(i==0 && j==3)
                miniNumber=array[i][j];
            else if(i!=0 && j==3)
            {
                if(miniNumber>array[i][j])
                    miniNumber=array[i][j];
            }
        }
    }
    printf("%d",miniNumber);

    return 0;
}