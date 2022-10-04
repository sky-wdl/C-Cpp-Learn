//
// Created by Dongliu_Wen on 2022/9/29.
//

/*
8. 喝奶茶
外卖规则如下：每单少于20元（不含）不予以送餐，每单在20（含）到30（不含）元之间收取8块钱送餐费，每单在30（含）到40（不含）元之间收取5元送餐费，每单在40（含）元以上免费送餐；如果每单在80（含）元还减免一杯价格最低的奶茶，请你计算这顿奶茶的全部费用。

输入格式：输入共2行，第一行包括一个整数n（n>=1且n<=8）,表示这一单一共要了几杯奶茶，第2行有n个浮点数，以空格分开，表示每杯奶茶的价格

输出格式：输出1行，包含一个浮点数，表示全部外卖费，保留小数点后面2位，当不够送餐服务时，输出error

例如：

【输入】

 2

 15 15

【输出】

35
 */

#include <stdio.h>
int main()
{
    int quantity=0,for_count;
    scanf("%d",&quantity);
    double array[quantity],money,mini=0;

    for(for_count=0, money=0; for_count < quantity; for_count++)
    {
        scanf("%lf", &array[for_count]);
        money+=array[for_count];//每输入一杯奶茶的价格，同步做价格累加

        if(for_count==0)
        {
            mini=array[for_count];
        }
        else if(mini>array[for_count])//同时进行判断单价最低的奶茶多少元
        {
            mini=array[for_count];
        }
    }
    if(money >= 80.0)
    {
        printf("%.2f",money-mini);
    }
    else if(money>=40.0 && money<80.0)
    {
        printf("%.2f",money);
    }
    else if(money>=30.0 && money<40.0)
    {
        printf("%.2f",money+5);
    }
    else if(money>=20.0 && money<30.0)
    {
        printf("%.2f",money+8);
    }
    else if(money<20)
    {
        printf("error");
    }

    return 0;
}