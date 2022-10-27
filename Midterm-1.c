//
// Created by Dongliu_Wen on 2022/10/27.
//

/*
 * 判断闰年

【问题描述】

输入任意起始年份整数 N和结束年份M，输出中间所有的闰年年份，5个换一行，每个年份占5个字符。

判断任意年份是否为闰年，需要满足以下条件中的任意一个：
① 该年份能被 4 整除同时不能被 100 整除；
② 该年份能被400整除。

【输入形式】

2020 2050
【输出形式】

#2020#2024#2028#2032#2036

#2040#2044#2048

#代表空格
 */
#include <stdio.h>

int main(void)
{
    int year_start,year_end;
    scanf("%d%d",&year_start,&year_end);
    for(int i=year_start,count=0;i<=year_end;++i)
    {
        if((i%4==0 && i%100!=0) || i%400==0)
        {
            if(count!=5)
            {
                printf(" %d",i);
                count++;
            }
            else
            {
                printf("\n %d",i);
                count=1;
            }
        }
    }

    return 0;
}