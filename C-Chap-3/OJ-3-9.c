//
// Created by Dongliu_Wen on 2022/10/12.
//
/*
 * 小芳的妈妈每天给她2.5元钱，她都会存起来。但是，每当这一天是存钱的第5天或者5的倍数的话， 她都会花去6元钱，请问经过n天， 小芳才可以存到超过m元钱,并输出当前存款金额，保留2两位小数。
例如
【输入】100
【输出】days=74,money=101.00

 */

#include <stdio.h>

int main()
{
    int i=1;
    float moneyTarget=0,todayMoney=5;
    scanf("%f", &moneyTarget);

    for (; todayMoney <= moneyTarget;)
    {
        if(i%5==0)todayMoney-=6;
        todayMoney+=2.5;
        ++i;
    }
    printf("days=%d,money=%.2f",i,todayMoney);

    return 0;
}