//
// Created by Dongliu_Wen on 2022/10/18.
//
/*
 * 【问题描述】

给出一个不多于5位的正整数，要求：
1.求出它是几位数。
2.分别打印出每一位数字。
3.按照逆序打印出每一位数字。
【输入形式】

控制台输入该正整数。
【输出形式】

控制台分行输出输出结果。
【输入样例1】

1234
【输出样例1】

4
1234
4321
【样例1说明】

1234位数为4，分别为1，2，3，4，逆序为4321
【输入样例2】

200
【输出样例2】

3
200
002
【样例1说明】

200位数为3，分别为2，0，0，逆序为002
 */

#include <stdio.h>


void print(int a,int b)
{
    int c=a;
    printf("%d\n%d\n",b,c);
    for(int i=0;i<b;++i)
    {
        printf("%d",a%10);
        a/=10;
    }
}
int main(void)
{
    int a=0;
    int c;
    int counts=0;
    scanf("%d",&a);
    c=a;
    if(a%10==0)
    {
        printf("1\n%d\n%d",a,a);
    }
    else
    {
        while (1)
        {
            if (a % 10 == 0)
            {
                print(c,counts);
                break;
            }
            a=a/10;
            ++counts;
        }
    }
    return 0;
}