//
// Created by Dongliu_Wen on 2022/10/29.
//
/*
 * 某学校对教师每月工资的计算规定如下：固定工资+课时补贴；教授每课时50元；副教授每课时30元；讲师每课时20元。定义教师抽象类，派生出不同职称的教师类，编写程序求若干个教师的月工资。

职称

等级

每月固定工资（元）

教授

一级

8000

二级

7500

副教授

一级

7000

二级

6000

三级

5000

讲师


4500
 */

#include <iostream>
#include <string>
using namespace std;
#define CLASS_HOUR 40;

class Teacher
{
private:
    string title;
    int baseWages;
    int classHourCost;

public:
    Teacher(string title, int baseWages, int classHourCost);

    int outputWages()
    {
        return this->baseWages+this->classHourCost*CLASS_HOUR;
    }

    string outputTitle()
    {
        return this->title + '\n';
    }
};

Teacher::Teacher(string title, int baseWages, int classHourCost) {
    this->title=title;
    this->baseWages=baseWages;
    this->classHourCost=classHourCost;
}

int main(void)
{
    Teacher a("一级教授",8000,50);
    Teacher b("二级教授",7500,50);
    Teacher c("一级副教授",7000,30);
    Teacher d("二级副教授",6000,30);
    Teacher e("三级副教授",5000,30);
    Teacher f("讲师",4500,20);

    cout<<a.outputTitle()<<"a的工资为>"<<a.outputWages()<<endl<<endl;
    cout<<b.outputTitle()<<"b的工资为>"<<b.outputWages()<<endl<<endl;
    cout<<c.outputTitle()<<"c的工资为>"<<c.outputWages()<<endl<<endl;
    cout<<d.outputTitle()<<"d的工资为>"<<d.outputWages()<<endl<<endl;
    cout<<e.outputTitle()<<"e的工资为>"<<e.outputWages()<<endl<<endl;
    cout<<f.outputTitle()<<"f的工资为>"<<f.outputWages();


    return 0;
}