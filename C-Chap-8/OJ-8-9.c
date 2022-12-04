//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * 拆分实数的整数与小数部分
【问题描述】

拆分实数的整数与小数部分：要求自定义一个函数 void splitfloat(float x, int *intpart, float *fracpart)，其中 x 是被拆分的实数，*intpart 和*fracpart 分别是将实 数 x 拆分出来的整数部分与小数部分。编写主函数，并在其中调用函数 splitfloat()。试 编写相应程序。（保留2位小数）

【输入形式】
【输出形式】
【样例输入】

3.65
【样例输出】

3 0.65
 */

#include <stdio.h>
#include <math.h>

void splitfloat(float x, int *intpart, float *fracpart);
int main(void)
{
    int intpart = 0;    //保存整数部分
    int i;          //循环计数
    float a;            //用户输入的数字
    float fracpart = 0; //保存小数部分
    char num[8];        //按照单个字符的形式保存用户输入的数字


    /*
     * 读入用户的输入，保存到字符数组中
     */
    scanf("%s",num);

    /*
     * 将用户的输入进行整合，储存到对应的变量中
     */
    i = 0;
    while(num[i] != 46)
    {
        intpart *= 10;
        intpart += (num[i] - '0');
        ++i;
    }

    ++i;
    float j = 1;
    while(num[i] != '\0')
    {
        fracpart += ((float)(num[i] - '0') * powf(10,-j));
        ++i;
        ++j;
    }

    /*
     * 将用户输入的字符串转换合称为单精度实数
     * 将用户输入以及整数、小数部分变量传递给函数
     */
    a = (float)intpart + fracpart;
    splitfloat(a, &intpart, &fracpart);

    return 0;
}

void splitfloat(float x, int *intpart, float *fracpart)
{
    printf("%d %.2f",*intpart, *fracpart);
}