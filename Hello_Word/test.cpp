#include<iostream>
using namespace std;
/*
* ����һ�����ࣨ�������ࣨ�����������ࣨ���Ĳ�νṹ�����ΰ������ȺͿ���������ݳ�Ա�����ε�λ�ôӵ���̳С�
* ���������ɳ��ȿ�Ⱥ͸߶ȹ��ɡ�Ҫ������ṩ֧�ֳ�ʼ���Ĺ��캯������ʾ�Լ���Ա�ĳ�Ա������
* ��д�����������������νṹ�������������������Ϣ��
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
protected: // ���ܶ���Ϊ˽�г�Ա����ö���Ϊ������Ա��������Ա���Ա�������ĳ�Ա��������
	int x, y; // ��Ϊ�̳�ʱҪ�ܷ���x��y����private���εĻ��Ͳ��ܷ�����
};
class Rectangle :public Point // ���������࣬���м̳з�ʽ
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
class Cube :public Rectangle // ���м̳�
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
