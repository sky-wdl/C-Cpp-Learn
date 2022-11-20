//
// Created by Dongliu_Wen on 2022/11/18.
//
/*
 *  计算并输出如图所示的杨辉三角形
1

1  1

1  2  1

1  3  3  1

1  4  6  4  1

【要求打印出6行，数字之间空2格】
 */

#include <stdio.h>


int array[6];
int arrayTemp[6];

void yangHui(int n);
int main(void)
{
    array[0] = arrayTemp[0] = 1;
    array[1] = arrayTemp[1] = 1;

    for (int i = 1; i < 7; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if(i-j==1)
            {
                printf("1\n");
                array[j] = arrayTemp[j] = 1;
            }
            else
                yangHui(j);
        }
        for (int j = 0; j < i; ++j)
        {
            array[j] = arrayTemp[j];
        }
    }

    return 0;
}

void yangHui(int n)
{
    if(n > 0)
    {
        printf("%d  ",array[n-1] + array[n]);
        arrayTemp[n] = array[n-1] + array[n];
    }
    else
    {
        printf("%d  ",array[n]);
    }
}