//
// Created by Dongliu_Wen on 2022/11/20.
//
/*
 * 循环后移：
【问题描述】

循环后移：有 n 个整数，使前面各数顺序向后移 m 个位置，移出的数再从开头移入。编 写一个函数实现以上功能，在主函数中输入 n 个整数并输出调整后的 n 个数。试编写相应程 序。【输入形式】
【输出形式】
【样例输入】
5 2

1 2 3 4 5

【样例输出】

4 5 1 2 3
【样例说明】

有5个元素的数组，后移2个位置
 */

#include <stdio.h>

int main(void)
{
    int quantity, move;
    scanf("%d%d",&quantity, &move);
    int array[quantity];

    for (int i = 0; i < quantity; ++i)
    {
        scanf("%d",&array[i]);
    }

    for (int i = (quantity - move); i < quantity; ++i)
    {
        printf("%d ",array[i]);
    }

    for (int i = 0; i < (quantity - move); ++i)
    {
        printf("%d ",array[i]);
    }

    return 0;
}