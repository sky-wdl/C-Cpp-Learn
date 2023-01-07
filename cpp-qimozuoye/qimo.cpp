//
// Created by Dongliu_Wen on 2022/12/21.
//
#include <iostream>
#include <fstream>
//#include <string>

using namespace std;

class Cstring
{
private:
    int count = 0;
public:
    int getCount();
    char str[100] = {'\0'};
    void statistics(); //计算字符串的字符个数
    void setChar(char ch); //添加字符
    void setString(string i);//字符串的输入
    void getString();//字符串的输出
    Cstring connect(Cstring a, Cstring b);//连接两个字符串
    void strCopy(Cstring tar, Cstring src);//复制字符串
    void search(char ch);//查找
    void change(char str1[], char str2[]);//两两交换
    Cstring z(Cstring a, int start, int end);//求子字符串
    static int compareStr(Cstring a, Cstring b);//比较
};

int Cstring::compareStr(Cstring a, Cstring b)
{
    int sign;
    a.statistics();
    b.statistics();
    for(int i = 0;i < (a.getCount()>b.getCount()?b.getCount():a.getCount());++i)
    {
        if((sign = (a.str[i] - b.str[i])) != 0)
        {
            break;
        }
        else
            continue;
    }

    return sign;
}

Cstring Cstring::z(Cstring a, int start, int end)
{
    Cstring b;
    for (int i = (start - 1); i < end; ++i)
    {
        b.setChar(a.str[i]);
    }
    return b;
}

int Cstring::getCount()
{
    return this->count;
}

void Cstring::change(char str1[], char str2[])
{
    char * p = str1;
    str1 = str2;
    str2 = p;
}

void Cstring::search(char ch)
{
    int i = 0;
    for(char K : this->str)
    {
        if(K == ch)
        {
            cout<<"已找到字符\""<<ch<<"\""<<"在第"<<i+1<<"的位置。";
            break;
        }
        i++;
    }
}

void Cstring::strCopy(Cstring tar, Cstring src)
{
    int i =0;
    for(char K : src.str)
    {
        tar.str[i] = '\0';
        tar.str[i] = K;
    }
}

void Cstring::setChar(char ch)
{
    char * i;
    i = this->str;
    while(*i != '\0')
    {
        i++;
    }
    *i = ch;
}

void Cstring::statistics()
{
    this->count = 0;
    for (char K: this->str)
    {
        this->count++;
    }
}

void Cstring::setString(string i)
{
    ifstream in;
    in.open(i,ios::in | ios::out);
    in>>this->str;
    in.close();
    this->statistics();
}

void Cstring::getString()
{
    ofstream outfile;
    outfile.open("a.txt",ios::in);
    cin.getline(this->str, 100);
    outfile<<this->str<<endl;
    cin.ignore();
    cout<<"写入a.txt完毕.."<<endl;
}

Cstring Cstring::connect(Cstring a, Cstring b)
{
    Cstring c;
    for(char K : a.str)
    {
        c.setChar(K);
    }
    for(char K : b.str)
    {
        c.setChar(K);
    }

    return c;
}
