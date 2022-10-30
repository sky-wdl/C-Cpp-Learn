#include<iostream>
using namespace std;
/*
* 定义一个点类（）矩形类（）和立方体类（）的层次结构。矩形包括长度和宽度两个数据成员，矩形的位置从点类继承。
* 立方体类由长度宽度和高度构成。要求各类提供支持初始化的构造函数和显示自己成员的成员函数。
* 编写主函数，测试这个层次结构，输出立方体类的相关信息。
*/
class Point
{
public:
	Point(int myx, int myy) { x = myx; y = myy; }
	void displayxy()
	{
		cout << "The position of center:";
		cout << "(" << x << "," << y << ")" << endl;
	}
protected: // 不能定义为私有成员，最好定义为保护成员，保护成员可以被派生类的成员函数引用
	int x, y; // 因为继承时要能访问x和y，用private修饰的话就不能访问了
};
class Rectangle :public Point // 定义派生类，公有继承方式
{
public:
	Rectangle(int myx, int myy, int mylength, int mywidth) :Point(myx, myy)
	{
		length = mylength; width = mywidth;
	}
	void displaylw()
	{
		cout << "The length and width of rectangle:";
		cout << length << "," << width << endl;
	}
private:
	int length, width;
};
class Cube :public Rectangle // 公有继承
{
public:
	Cube(int myx, int myy, int mylength, int mywidth, int myhight) :Rectangle(myx, myy, mylength, mywidth)
	{
		hight = myhight;
	}
	void displayh()
	{
		cout << "The hight of cube:";
		cout << hight << endl;
	}
private:
	int length, width, hight;

};
int main()
{
	Cube c(2, 3, 5, 7, 9);
	cout << "The data of cube:" << endl;
	c.displayxy();
	c.displaylw();
	c.displayh();
	return 0;
}
