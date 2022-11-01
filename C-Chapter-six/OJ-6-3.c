//
// Created by Dongliu_Wen on 2022/10/30.
//
/*
 * 人民币兑换
【问题描述】

输入一个人民币的整数值（100以内以元为单位），编程找到用10元、5元、2元、1元表示的总数量的最小组合方式。

【输入形式】

从控制台输入一个整数值，表示以元为单位的人民币币值。

【输出形式】

向控制台输出四个整数（以空格分隔），分别表示兑换成的10元、5元、2元、1元人民币的数量，若没有某个币值，则对应输出0。

【样例1输入】

98
【样例1输出】

9 1 1 1
【样例1说明】

输入为98，表示98元人民币，把其兑换成10元、5元、2元、1元表示的总数量的最小组合方式为：9个10元，1个5元，1个2元，1个1元，故输出：9 1 1 1

【样例2输入】

11
【样例2输出】

1 0 0 1
【样例2说明】

输入为11，表示11元人民币，把其兑换成10元、5元、2元、1元表示的总数量的最小组合方式为：1个10元，1个1元，没有5元和2元，故输出：1 0 0 1
 */
#include <stdio.h>

int main(void)
{
    int money,count=100;
    int moneyTen=0,moneyFive=0,moneyTwo=0,moneyOne=0;
    scanf("%d",&money);
    for(int ten=0;ten<=money/10+1;ten++)
    {
        for(int five=0;(ten*10+five*5)<=money;five++)
        {
            for (int two = 0;(ten*10+five*5+two*2)<=money; ++two)
            {
                for(int one=0;(ten*10+five*5+two*2+one)<=money;one++)
                {
                    if(ten*10+five*5+two*2+one==money && count>=ten+five+two+one)
                    {
                        count=ten+five+two+one;
                        moneyTen=ten;
                        moneyTwo=two;
                        moneyFive=five;
                        moneyOne=one;
                    }
                }
            }
        }
    }

    printf("%d %d %d %d",moneyTen,moneyFive,moneyTwo,moneyOne);

    return 0;
}