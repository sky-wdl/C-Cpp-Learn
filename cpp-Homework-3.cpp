//
// Created by Dongliu_Wen on 2022/10/29.
//
/*
 * ĳѧУ�Խ�ʦÿ�¹��ʵļ���涨���£��̶�����+��ʱ����������ÿ��ʱ50Ԫ��������ÿ��ʱ30Ԫ����ʦÿ��ʱ20Ԫ�������ʦ�����࣬��������ְͬ�ƵĽ�ʦ�࣬��д���������ɸ���ʦ���¹��ʡ�

ְ��

�ȼ�

ÿ�¹̶����ʣ�Ԫ��

����

һ��

8000

����

7500

������

һ��

7000

����

6000

����

5000

��ʦ


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
    Teacher a("һ������",8000,50);
    Teacher b("��������",7500,50);
    Teacher c("һ��������",7000,30);
    Teacher d("����������",6000,30);
    Teacher e("����������",5000,30);
    Teacher f("��ʦ",4500,20);

    cout<<a.outputTitle()<<"a�Ĺ���Ϊ>"<<a.outputWages()<<endl<<endl;
    cout<<b.outputTitle()<<"b�Ĺ���Ϊ>"<<b.outputWages()<<endl<<endl;
    cout<<c.outputTitle()<<"c�Ĺ���Ϊ>"<<c.outputWages()<<endl<<endl;
    cout<<d.outputTitle()<<"d�Ĺ���Ϊ>"<<d.outputWages()<<endl<<endl;
    cout<<e.outputTitle()<<"e�Ĺ���Ϊ>"<<e.outputWages()<<endl<<endl;
    cout<<f.outputTitle()<<"f�Ĺ���Ϊ>"<<f.outputWages();


    return 0;
}