//
// Created by Dongliu_Wen on 2022/11/3.
//
/*
 * 设计一个类层次，基类为Date，从Date分别派生出ShortE、MediumDate和LongDate.他们各自有成员函数print()，输出当前日期。
Date输出日期格式为：04-14-2018
ShortE输出日期格式为：14-04-2018
MediumDate输出日期格式为：Apr.14,2018
LongDate输出日期格式为：April 14, 2018

 */

#include <iostream>
#include <ctime>

class Date
{
public:
    virtual void print()
    {
        time_t nowTime = time(0);
        tm *dt = localtime(&nowTime);
        std::cout<<"Date> "<<dt->tm_mon<<"-"<<dt->tm_mday<<"-"<<1900 + dt->tm_year<<std::endl;
    }
};

class ShortE:public Date
{
public:
    void print()
    {
        time_t nowTime = time(0);
        tm *dt = localtime(&nowTime);
        std::cout<<"ShortE> "<<dt->tm_mday<<"-"<<dt->tm_mon<<"-"<<1900 + dt->tm_year<<std::endl;
    }
};

class MediumDate:public Date
{
public:
    void print()
    {
        std::cout<<"MediumDate> Apr.14,2018"<<std::endl;
    }
};

class LongDate:public Date
{
public:
    void print()
    {
        std::cout<<"LongDate> April 14, 2018"<<std::endl;
    }
};

int main(void)
{
    Date date;
    date.print();

    ShortE shortE;
    shortE.print();

    MediumDate mediumDate;
    mediumDate.print();

    LongDate longDate;
    longDate.print();

    return 0;
}