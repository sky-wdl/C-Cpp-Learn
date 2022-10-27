//
// Created by Dongliu_Wen on 2022/10/27.
//
/*
 * 输入1个正整数n,在输入n个字符，分别统计其中英文字母、空格或回车、数字字符和其他字符的个数。（提示参照附录B）

【输入】

7

ab  88 *

【输出】2 2 2 1
 */
#include <stdio.h>

int main()
{
    int n,en=0,space=-1,number=0,i;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&c);
        if((c>=97 && c<=122) || (c>=65 && c<=90))
        {
            en++;
        }
        else if(c==' ' || c=='\n')
        {
            space++;
        }
        else if(c>=48 && c<=57)
        {
            number++;
        }
    }
    printf("%d %d %d %d",en,space,number,n-(en+space+number));

    return 0;
}

