//
// Created by Dongliu_Wen on 2022/10/30.
//
/*
 * 小数分数转换
【问题描述】

从标准输入中输入一个小数，编写程序将其转换成相应的分数显示，即转换为几又几分之几。
要求：
1、输入的小数包括整数部分、小数点和小数部分；整数部分和小数部分分别最多有7位数字；整数部分可以为0，若整数部分为非零整数时，则其最高位不为0；小数部分的末尾数字不为零。
2、输出的分数应为最简分数，由三部分数字组成：第一部分数字代表整数部分（若分数小于1，则为0，否则输出相应分数的整数部分，且最高位不为0），第二部分数字代表分子，第三部分数字代表分母，分子比分母小且不能再约分。

【输入形式】

从标准输入中输入一个小数后打回车。

【输出形式】

将转换后相应分数的三个部分数值输出到标准输出，并且分别以一个空格分隔，最后一个数值后没有空格，有回车换行。

【样例1输入】

0.35
【样例1输出】

0 7 20
【样例2输入】

1050.0144
【样例2输出】

1050 9 625
【样例说明】

样例1中输入的小数为0.35，相应分数整数部分为0，小数部分转换为分数为35/100，约分成最简分数为7/20。
样例2中输入的小数为1050.0144，相应分数整数部分为1050，小数部分转换为分数为144/10000，约分成最简分数为9/625。
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int getNumber[100], i=0, integer=0, fenzi=0, fenmu, state=0, count=0;

    do {
        getNumber[i]=getchar();
        i++;
    } while (getNumber[i-1]!='\n');

    for (int j = 0; j < i-1; ++j)
    {
        if(getNumber[j]!='.' && state == 0)
        {
            integer = integer * 10 + (getNumber[j] - 48);
        }
        else if(getNumber[j]=='.')
        {
            state = 1;
        }
        else if(getNumber[j] != '.' && state == 1)
        {
            fenzi = fenzi * 10 + (getNumber[j]-48);
            count++;
        }
    }
    fenmu = (int)pow(10,count);
    for (int j = fenzi; j > 0; --j)
    {
        if ((fenzi % j ==0) && (fenmu % j == 0))
        {
            fenzi/=j;
            fenmu/=j;
        }
    }
    printf("%d %d %d",integer,fenzi,fenmu);

    return 0;
}