//
// Created by Dongliu_Wen on 2022/11/17.
//

/*
 * 求一批整数中出现最多的数字。
【问题描述】

求一批整数中出现最多的数字。输入一个正整数 n (1<n≤1000)，再输入 n 个整数，分析

每个整数的每一位数字，求出现次数最多的各位数字。例如输入 3 个整数 1234、2345、3456，

其中出现次数最多的数字是 3 和 4，均出现了 3 次。试编写相应程序。


【输入形式】
【输出形式】
【样例输入】

3

1234 2345 3456
【样例输出】

3 4
 */

#include <stdio.h>

int main(void)
{
    int count,max,sign;
    scanf("%d",&count);


    /*
     * 初始化计数数组的元素均为0
     * arrayNumber代表所有数字出现的次数目前为0
     * arrayCount用于储存用户输入的数据
     */
    int arrayNumber[10]={0};
    int arrayCount[count];


    /*
     * 循环count次
     * 读取用户输入的数据
     * 将其保存到数组arrayCount中。
     */
    for (int i = 0; i < count; ++i)
    {
        scanf("%d",&arrayCount[i]);
    }


    /*
     * 计算用户输入的几组数据中各个数字出现的次数
     * 各个数字出现的次数均对应保存到arrayNumber中
     */
    for (int i = 0, temp; i < count; ++i)
    {
        while(arrayCount[i] != 0)
        {
            temp = arrayCount[i] % 10;
            arrayNumber[temp]++;
            arrayCount[i] /= 10;
        }
    }


    /*
     * 初始化max,使其等于数字0的出现次数，并从数字0开始，依次进行数字出现次数的比较
     * 取出极大值
     */
    max = 0;
    for (int i = 0; i < 9; ++i)
    {
        if(arrayNumber[i] < arrayNumber[i+1])
        {
            max = i+1;
            sign = arrayNumber[i+1];
        }
    }


    printf("%d ",max);
    for (int i = 0; i < 10; ++i)
    {
        if(arrayNumber[i] == sign && i != max)
            printf("%d ",i);
    }

    return 0;
}