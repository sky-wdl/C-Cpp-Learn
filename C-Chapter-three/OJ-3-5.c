//
// Created by Dongliu_Wen on 2022/10/11.
//
/*
 * 输入1个正整数n,在输入n个字符，分别统计其中英文字母、空格或回车、数字字符和其他字符的个数。（提示参照附录B）
 */

#include <stdio.h>

int main(void)
{
    int n=0,englishChar=0,space=0,number=0,other=0;
    scanf("%d",&n);
    for (int i = 0,x=0; i < n+1; ++i)
    {
        scanf("%c",&x);
        if((x==32))
        {
            space++;
        }
        else if((x==13))
        {
            space++;
        }
        else if(x>=65 && x<=90)
        {
            englishChar++;
        }
        else if(x>=97 && x<=122)
        {
            englishChar++;
        }
        else if(x>=48 && x<=57)
        {
            number++;
        }
        else
        {
            other++;
        }
    }

    printf("%d %d %d %d",englishChar,space,number,other-1);

    return 0;
}