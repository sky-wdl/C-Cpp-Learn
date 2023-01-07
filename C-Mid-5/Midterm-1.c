//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 判断奇偶
【问题描述】

输入任意起始整数 N和结束整数M，输出中间所有的奇数，5个换一行，每个奇数占5个字符。

【输入形式】

100 112
【输出形式】

##101##103##105##107##109

##111

#号代表空格符
 */

#include <stdio.h>

int main(void)
{
    int start, end;
    scanf("%d%d",&start, &end);
    for (int i = start, cnt = 0; i <= end; ++i)
    {
        if(i % 2 != 0 && cnt < 5)
        {
            cnt++;
            printf("%5d",i);
        }
        else if(i % 2 != 0 && cnt == 5)
        {
            cnt = 1;
            printf("\n%5d",i);
        }
    }

    return 0;
}


