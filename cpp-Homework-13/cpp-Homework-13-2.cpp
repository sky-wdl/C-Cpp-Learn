//
// Created by Dongliu_Wen on 2022/12/1.
//
/*
 * �ú���ģ��ʵ����������ʵ��ƽ�����ĳ���
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
    cout<<"��������>";
    cin>>intTemp;
    cout<<"����ƽ����>"<<int(Pow(intTemp))<<endl;

    cout<<"����ʵ��>";
    cin>>floatTemp;
    cout<<"ʵ��ƽ����>"<<Pow(floatTemp)<<endl;

    return 0;
}