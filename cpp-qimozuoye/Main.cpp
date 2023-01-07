//
// Created by Dongliu_Wen on 2022/12/22.
//

/*
    char str[100] = {'\0'};
    void statistics(); //计算字符串的字符个数
    void setChar(char ch); //添加字符串
    void setString(string i);//字符串的输入
    void getString();//字符串的输出
    Cstring connect(Cstring a, Cstring b);//连接两个字符串
    void strCopy(Cstring tar, Cstring src);//复制字符串
    void search(char ch);//查找
    void change(char str1[], char str2[]);//两两交换
    Cstring z(Cstring a, int start, int end);//求子字符串
    int compareStr(Cstring a, Cstring b);//比较
 */

#include "qimo.cpp"
#include <fstream>

int main()
{
    Cstring str;
    str.setString("a.txt"); //字符串赋值
    str.statistics(); //计算字符串的字符个数
    str.setChar('a'); //添加字符
    Cstring b;
    b.strCopy(b, str);
    b.connect(str, b);
    b.search('a');
    b.change(b.str, str.str);
    Cstring a = str.z(str,1,2);
    int max = Cstring::compareStr(str,b);
    cout<<max;
    str.getString();

    return 0;
}