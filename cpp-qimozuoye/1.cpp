//
// Created by Dongliu_Wen on 2022/12/17.
//
/*
 * 实现一个类层次管理整数数组，基类intArray为一维数组，派生类Maxtrix为二维数组，Array3D为三维数组。请参照基类intArray的定义，完成派生类Matrix和Array3D的定义。其中intArray定义如下：

class intArray{
public:
  intArray(int count)
 {
      ar=new int[count];
          n=count;
     }
 int  &  elem(int i)
{
     return ar[i];
}
void print( )
{
     int i;
     for(i=0;i<n;i++)
  cout<<ar[i]<< " ";
  }
protected:
     int *ar;
     int n;   //代表元素个数
};

 */

class intArray{
public:
    intArray(int count)
    {
        ar=new int[count];
        n=count;
    }

    intArray(){}

    int  &  elem(int i)
    {
        return ar[i];
    }

    void print( )
    {
        int i;
        for(i=0;i<n;i++)
            cout<<ar[i]<< " ";
    }

protected:
     int **ar;
     int n;   //代表元素个数
};

class Maxtrix:public intArray
{
public:
    Maxtrix(int x,int y)
    {
        ar= reinterpret_cast<int **>(new int[x][10]);
        this->x = x;
        this->y = y;
    }

    Maxtrix(){}

    int  &  elem(int x,int y)
    {
        return ar[x][y];
    }

    void print( )
    {
        int i;
        for(i=0;i<x;i++)
            for (int j = 0; j < y; ++j)
            {
                cout<<ar[x][y]<<" ";
            }
    }

protected:
     int **ar;
     int x;   //代表元素个数
     int y;
};

class Array3D:public intArray
{
public:
    Maxtrix(int x,int y, int z)
    {
        ar= reinterpret_cast<int **>(new int[x][100][z]);
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Maxtrix(){}

    int  &  elem(int x,int y,int z)
    {
        return ar[x][y][z];
    }

    void print( )
    {
        int i;
        for(i=0;i<x;i++)
            for (int j = 0; j < y; ++j)
                for (int k = 0; k < z; ++k)
                {
                cout<<ar[x][y][z]<<" ";
                }
    }

protected:
     int ***ar;
     int x;   //代表元素个数
     int y;
     int z;
};


int main()
{
    //

    return 0;
}
