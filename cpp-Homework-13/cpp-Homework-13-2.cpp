//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * 用函数模板实现求整数、实数平方根的程序。
 */

#include <iostream>
#include <cmath>
using namespace std;

template<class T>
T Pow(T x)
{
    return sqrt(x);
}

int main()
{
    int intTemp;
    float floatTemp;
    cout<<"输入整数>";
    cin>>intTemp;
    cout<<"整数平方根>"<<int(Pow(intTemp))<<endl;

    cout<<"输入实数>";
    cin>>floatTemp;
    cout<<"实数平方根>"<<Pow(floatTemp)<<endl;

    return 0;
}