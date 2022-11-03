//
// Created by Dongliu_Wen on 2022/9/28.
//
/*
4. 3数求和
【问题描述】

求以下三正整数的和,保留2位小数 1~a之和 1~b的平方和 1~c的倒数和。

【输入形式】

a b c

【输出形式】

sum=xx.xx
【样例输入】

100 50 10

【样例输出】

sum=47977.93
 */
#include <stdio.h>
 int main()
 {
     int a=0,b=0,i,d;
     float c=0.0;
     double x;
     scanf("%d %d %f",&a,&b,&c);
     for(i=0,d=0;i<=a;i++)
     {
         d+=i;
     }
     a=d;

     for(i=0,d=0;i<=b;i++)
     {
         d=d+i*i;
     }
     b=d;

     for(i=1,x=0.0;i<=c;i++)
     {
         x=x+1.0/(float)i;
     }
//     printf("%.2f\n",x);

     printf("sum=%.2f",(float)a+(float)b+x);

     return 0;
 }