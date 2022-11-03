//
// Created by Dongliu_Wen on 2022/10/19.
//
/*
 * 生日蜡烛
【问题描述】

某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。现在算起来，他一共吹熄了270根蜡烛。请问，他今年过多少岁的生日party？

 请填写他今年过生日party的年龄数。【假设最大年龄150】


【输入形式】

没有输入。

【输出形式】

输出某君今年过生日party的年龄数可能是多少？

【样例输入】

无
【样例输出】【年龄从小到大输出】

23#25#xx#xx#

#代表空格，测试输出以空格结束【年龄从小到大输出】
 */
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 150; ++i)
    {
        for (int j = i,sum=0,count=0;; ++j)
        {
            sum+=j;
            count++;
            if(sum==270)
            {
                printf("%d ",i+count-1);
                break;
            }
            else if(sum>270)
            {
                break;
            }
        }
    }

    return 0;
}