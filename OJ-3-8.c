//
// Created by Dongliu_Wen on 2022/10/12.
//
/*
 * 运费
用switch实现：每公里每吨货物的基本运费为p(price)，货物重为w(weight)，距离为s，折扣为d(discount)， 则总运费f(freight)的计算公式为 freight=price*weight*s*(1-discount)。输出运费，保留两位小数。

s<250km,没有折扣；250<=s<500,2%的折扣；500<=s<1000,5%的折扣；1000<=s<2000,8%的折扣；2000<=s<3000,10%的折扣；3000<=s,15%的折扣；

例；

【输入】10 100 300

【输出】freight=294000.00


【输入】1 10 2800

【输出】freight=25200.00


 */

#include <stdio.h>

int main()
{
    int discount=0,price=0,weight=0,s=0;
    scanf("%d%d%d",&price,&weight,&s);
    if(s>=3000)
    {
        discount=15;
    }
    else if(s>=2000 && s<3000)
    {
        discount=10;
    }
    else if(s>=1000 && s<2000)
    {
        discount=8;
    }
    else if(s>=500 && s<1000)
    {
        discount=5;
    }
    else if(s>=250 && s<500)
    {
        discount=2;
    }

    switch(discount)
    {
        case 15:printf("freight=%.2f",price*weight*s*0.85);break;
        case 10:printf("freight=%.2f",price*weight*s*0.9);break;
        case 8:printf("freight=%.2f",price*weight*s*0.92);break;
        case 5:printf("freight=%.2f",price*weight*s*0.95);break;
        case 2:printf("freight=%.2f",price*weight*s*0.98);break;
        default :printf("freight=%d",price*weight*s);
    }

    return 0;
}