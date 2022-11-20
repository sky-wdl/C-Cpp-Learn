// 1、设计一个Circle类，有数据成员radius（半径）、成员函数area()，计算圆的面积。构造一个Circle对象进行测试。
#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14;

class Circle
{
private: 
    double radius;//数据成员，用于存放圆的半径
    double Area;//数据成员，用于存放圆的面积

public:
    const int num = 2004210523;
    double area(double r)//成员函数，用于获取计算圆的面积并返回给调用处。
    {
        radius = r;
        Area = PI * pow(radius,2);
        return Area;
    }

};

int main()
{
    Circle c;//实例化类
    double radius=0;//定义变量，接收用户输入的半径数据。
    cout << "Enter radius>";
    cin >> radius;
    radius = c.area(radius);
    printf("%c%c%c%d", 25991, 19996, 26611, c.num);
    cout << "radius:" << radius;

    return 0;
}