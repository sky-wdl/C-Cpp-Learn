/*
 * 实现一个类层次管理整数数组，基类intArray为一维数组，派生类Maxtrix为二维数组，Array3D为三维数组。请参照基类intArray的定义，完成派生类Matrix和Array3D的定义。
 */

#include <iostream>
using namespace std;

class intArray{
public:
    intArray(int count)
    {
        ar=new int[count];
        n=count;
    }

    intArray() {}

    int & elem(int i)
    {
        return ar[i];
    }
    void print()
    {
        int i;
        for(i=0;i<n;i++)
            cout<<ar[i]<< " ";
    }
protected:
    int *ar;
    int n;   //代表元素个数
};

class Matrix:public intArray
{
public:
    Matrix(int x,int y)
    {
        ar=new int[x*y];
        n=x*y;
    }
    int & elem(int x,int y)
    {
        return ar[x*y];
    }
    void print()
    {
        int i;
        for(i=0;i<n;i++)
            cout<<ar[i]<< " ";
    }
protected:
    int *ar;
    int n;   //代表元素个数
};

class Array3D:public intArray
{
public:
    Array3D(int x,int y,int z)
    {
        ar=new int[x*y*z];
        n=x*y*z;
    }
    int & elem(int x,int y,int z)
    {
        return ar[x*y*z];
    }
    void print()
    {
        int i;
        for(i=0;i<n;i++)
            cout<<ar[i]<< " ";
    }
protected:
    int *ar;
    int n;   //代表元素个数
};