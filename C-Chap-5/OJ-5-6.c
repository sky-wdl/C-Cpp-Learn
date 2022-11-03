//
// Created by Dongliu_Wen on 2022/10/26.
//
/*
 * 约数最多的整数
【问题描述】输入若干个正整数，以-1表示结束。输出这些整数中约数（包括1和自身）最多的整数及其约数个数，两者之间用一个空格隔开。数量相同，输出后输入的整数。要求子函数getCount实现计算一个正整数的约数个数。

【输入形式】
【输出形式】
【样例输入】17 5 -1

【样例输出】5 2


【样例说明】输出中5和2之间一个空格，2之后一个换行
 */
#include  <stdio.h>
int  getCount(int  m);

int main(void)
{
    int number = 0, n, count = 0;
    do
    {
        scanf("%d",&n);
        if (n != -1)
        {
            if (count <= getCount(n))
            {
                count = getCount(n);
                number = n;
            }
        }
        else if(n==-1)
        {
            break;
        }
    }while(1);

    printf("%d %d",number,count);

    return 0;
}
int  getCount(int  m)
{
    int i,count=0;
    for(i=1;i<=m;++i)
    {
        if(m%i==0)
        {
            count++;
        }
    }
    return count;
}