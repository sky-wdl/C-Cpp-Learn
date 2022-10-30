// cpp-Homework-7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
/*
* 模仿Stack栈类，设计线性表类或循环队列类。（二选一）
*/

#include <iostream>
#include <string>
using namespace std;

class Stack
{
private:
	string c[100];//字符串数据，存放字符串数据
	string a;//存放从字符串数组中取出的字符串
	int count = 0;//记录目前存放的字符串数量
public:
	void inputString(string s)
	{
		c[count] = s;
		++count;
	}
	string outputString()
	{
		a = c[count-1];
		count=count-1;
		return a;
	}
};

int main()
{
	Stack stack;
	int i=0,count=0;
	const int num = 2004210523;
	string c;
	cout << "请输入你要传入的字符串数量,输入>";
	cin >> i;
	count = i;
	for (int a = 0; a < i; a++)
	{
		cin >>c;
		stack.inputString(c);
	}
	while (1)
	{
		int i=0;
		cout << "\n输入1进行读取字符,-1结束运行>";
		cin >> i;
		if (i == 1 && count!=0)
		{
			c=stack.outputString();
			cout << c;
			printf("%c%c%c,%d", 25991, 19996, 26611, num);
			--count;
		}
		else if (i == -1 || count==0)
		{
			break;
		}
	}

	return 0;
}