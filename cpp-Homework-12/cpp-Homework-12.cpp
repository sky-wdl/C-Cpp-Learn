//
// Created by Dongliu_Wen on 2022/11/24.
//
/*
 *改造Set类，重载+（并集）、（-）差集、*（交集）、<<（输出）、>>（输入）和函数调用操作符（添加一个元素）
 */


/*
 * 此题没有心思写，胡乱瞎写了一些代码
 */


#include <iostream>
using namespace std;

class Set
{
private:
    static int i;
    int element[10] = {0};
public:
    static Set add(Set a, Set b);
    static Set sub(Set A, Set B);
    static Set intersection(Set A, Set B);
    int getSet(Set A);
    void setSet(int a);
    Set(int a,int b,int c,int d,int e)
    {
        element[0] = a;
        element[1] = b;
        element[2] = c;
        element[3] = d;
        element[4] = e;
    }
    Set();
};
int Set::i = 0;

Set Set::add(Set a, Set b)
{
    Set c;
    for (int j = 0; j < 5; ++j) {
        c.element[j]=a.element[j];
    }
    for (int j = 5,i=0; j < 10; ++j, ++i) {
        c.element[j] = b.element[i];
    }

    return c;
}

Set Set::sub(Set A, Set B)
{
    Set c;
    for (int j = 0; j < 5; ++j)
    {
        int sign = 1;
        for (int k = 0; k < 5; ++k)
        {
            if (A.element[j] == B.element[k])
            {
                sign = 0;
                break;
            }
        }
        if (sign)
        {
            c.element[i] = A.element[j];
            ++i;
        }
    }
    i=0;

    for (int j = 0; j < 5; ++j)
    {
        int sign = 1;
        for (int k = 0; k < 5; ++k)
        {
            if (B.element[j] == A.element[k])
            {
                sign = 0;
                break;
            }
        }
        if (sign)
        {
            c.element[i] = B.element[j];
            ++i;
        }
    }
    i=0;

    return c;
}

Set Set::intersection(Set A, Set B)
{
    Set c;
    for (int j = 0; j < 5; ++j)
    {
        int sign = 0;
        for (int k = 0; k < 5; ++k)
        {
            if (B.element[j] == A.element[k])
            {
                sign = 1;
                break;
            }
        }
        if (sign)
        {
            c.element[i] = B.element[j];
            ++i;
        }
    }
    i=0;

    for (int j = 0; j < 5; ++j)
    {
        int sign = 0;
        for (int k = 0; k < 5; ++k)
        {
            if (A.element[j] == B.element[k])
            {
                sign = 1;
                break;
            }
        }
        if (sign)
        {
            c.element[i] = A.element[j];
            ++i;
        }
    }
    i=0;

    return c;
}

int Set::getSet(Set A)
{
    return A.element[0];
}

void Set::setSet(int a)
{
    this->element[5] = a;
}


int main(void)
{
    Set A(1,2,3,4,5);
    Set B(5,6,7,8,9);
    Set C = Set::add(A, B);
    Set D = Set::sub(A, B);
    Set E = Set::intersection(A, B);
    cout<<A.getSet(A);
    B.setSet(5);

    return 0;
}