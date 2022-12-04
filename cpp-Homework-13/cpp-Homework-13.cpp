//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * 1.	请设计一个模板函数getSum（），并定义一个数组，向该模板函数输入数组元素，计算该数组所有元素的和返回函数值。给出完整的程序代码。
2.用函数模板实现求整数、实数平方根的程序。

 */

#include <iostream>
using namespace std;

template <typename T>
T getSum(T x)
{
    static T sum = 0;
    sum += x;
    return sum;
}
int main()
{
    float array[10], sum = 0;
    for (int i = 0; i < 10; ++i)
    {
        cout<<"请输入第"<<i+1<<"个元素的值>";
        cin>>array[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        sum = getSum(array[i]);
    }
    cout<<"元素的和为："<<sum;

    return 0;
}