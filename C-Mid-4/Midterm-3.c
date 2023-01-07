//
// Created by Dongliu_Wen on 2023/1/6.
//
/*
 * 最大的K个字符串
【问题描述】

 输入n 个互不相同的字符串(长度均不大于50），按字典序输出最大的k个。（1 ≤ k ≤ n ≤ 100)

【输入形式】

第一行，两个整数n和k，使用一个空格分隔。

接下来n 行，每行一个字符串
【输出形式】

k行最大的字符串（递增输出）
【样例输入】

7 3

Monday

Tuesday

Wednesday

Thursday

Friday

Saturday

Sunday

【样例输出】

Wednesday

Tuesday

Thursday
 */

#include <stdio.h>
#include <string.h>

typedef struct sing{
    char s[51];
}str;

int main(void)
{
    int n, k;
    scanf("%d%d",&n, &k);
    str s[n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 51; ++j)
        {
            s[i].s[j] = '\0';
        }
        scanf("%s",s[i].s);
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if((strcmp(s[i].s, s[j].s) < 0))
            {
                char temp[51] = {'\0'};
                strcpy(temp,s[j].s);
                strcpy(s[j].s, s[i].s);
                strcpy(s[i].s, temp);
            }
        }
    }
    for (int i = 0; i < k ; ++i)
    {
        puts(s[i].s);
    }

    return 0;
}


