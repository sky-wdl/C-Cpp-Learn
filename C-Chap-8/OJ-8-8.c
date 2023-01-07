//
// Created by Dongliu_Wen on 2022/11/23.
//

//1 2 3 4 5
/*
 * 报数：
【问题描述】

报数：有 n 个人围成一圈，按顺序从 1 到 n 编好号。从第一个人开始报数，报到 m（m<n）

的人退出圈子，下一个人从 1 开始报数，报到 m 的人退出圈子。如此下去，直到留下最后一

个人。输入整数 n 和 m，输出最后一个退出圈子人的编号。试编写相应程序。


【输入形式】

n m
【输出形式】

最后一个退出圈子人的编号

【样例输入】

5 2
【样例输出】

3
【样例说明】

输入圈子的人数n，和退出圈子的标记m，每次报数到m，就退出圈子，输出最后一个退出圈子人的编号
 */


/*
 * 已解决，思路是用数据进行标记各序号目前是否退出，如退出，对应序号的数组元素其值置0进行标记
 * 一共需要退出n-1个数字，循环n-1次
 * 最后遍历数组，将非0元素打印出来即可
 */
#include <stdio.h>

int main(void)
{
    int n, m;
    scanf("%d%d",&n, &m);
    int number[n];
    for (int i = 0; i < n; ++i)
    {
        number[i] = i + 1;
    }

    int count = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        int sign = 0;
        while (sign != m)
        {
            if(count == n)
                count = 0;
            else if (count > n)
            {
                count -= n;
                count--;
            }

            if(number[count] != '\0')
            {
                sign++;
            }
            count++;
        }
        number[count - 1] = '\0';
    }

    for (int i = 0; i < n; ++i)
    {
        if(number[i] != '\0')
            printf("%d", number[i]);
    }

    return 0;
}