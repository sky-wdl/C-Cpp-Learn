//
// Created by Dongliu_Wen on 2021/7/22.
//

#include <stdio.h>

#define PI 3.14159265 //不占内存，仅进行字符替换，将PI 换位 3.14159265

const int _____sum____ = 50;//常变量 方法是定义变量时砸前面加上关键字"const"，常变量就是有名字的不会改变的“变量”
int main(){
    long long int b = 327689999;
    printf("Hello,world!\n");
    printf("%f\n",PI);
    printf("%f\n",_____sum____);
    printf("%d",b);
    printf( 5/3);
    return 0;
}