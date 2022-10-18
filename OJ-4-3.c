//
// Created by Dongliu_Wen on 2022/10/18.
//
/*
 * 素数
【问题描述】

 从控制台输入整数n（n>=1），计算并输出从1到n之间（包括n）个位为1的所有素数，若没有符合要求的素数，则输出－1。

【输入形式】

 从控制台输入整数n。

【输出形式】

 按照从小到大的顺序，在一行上输出1到n之间（包括n）个位为1的所有素数，素数之间用一个空格分隔，若没有符合要求的素数，则输出－1。

【样例输入】

120
【样例输出】

11 31 41 61 71 101
【样例说明】

 输入的整数n为120，1到120之间个位为1的所有素数为11、31、41、61、71、101。
 */

#include <stdio.h>

int main(void)
{
    int a;
    int counts=0;
    int state=0;
    scanf("%d",&a);
    for(int i=11;i<=a;i+=10)
    {
        state=0;
        for (int j = 2; j < i; ++j)
        {
            if(i%j==0)
            {
                state+=1;
                break;
            }
        }
        if(state==0)
        {
            printf("%d ", i);
            counts++;
        }
    }
    if(counts==0)
    {
        printf("-1");
    }
    return 0;
}