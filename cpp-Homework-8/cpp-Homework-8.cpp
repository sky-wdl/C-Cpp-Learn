/* Copyright (c) 2022, Dongliu_Wen
 * All rights reserved.
 * File：cpp-Homework-8.cpp
 * Author：文东柳
 * Date：2022年 10 月 20 日
 * Version：v1.0
 */

#include <iostream>
#include <set>
using namespace std;

class Set
{
private:
	set<int> s1 = {};
	set<int> s2 = {};

public:
	Set(set<int> set_1, set<int> set_2)
	{
		s1 = set_1;
		s2 = set_2;
	}

	void insertElement(int a, int serial)
	{
		if (serial == 1)
		{
			s1.insert(a);
		}
		else if (serial == 2)
		{
			s2.insert(a);
		}
		else
		{
			cout << "Insert Error!" << endl;
		}
	}

	void deletaElement(int a, int serial)
	{
		if (serial == 1)
		{
			s1.erase(a);
		}
		else if (serial == 2)
		{
			s2.erase(a);
		}
		else
		{
			cout << "Delete Error!" << endl;
		}
	}

	void printSet(int serial)
	{
		if (serial == 1)
		{
			for (int k : s1)
			{
				cout << k << " ";
			}
		}
		else if (serial == 2)
		{
			for (int k : s2)
			{
				cout << k << " ";
			}
		}
		else
		{
			cout << "Print Error!" << endl;
		}
	}

	void setEqual()
	{
		for (int k1 : s1)
		{
			for (int k2 : s2)
			{
				if (k2 == k1)
				{
					cout << k2 << ",";
				}
			}
		}
	}

	void setUnion()
	{
		set<int> s3;
		s3 = s1;
		for (auto k1 : s2)
		{
			s3.insert(k1);
		}
		for (auto k1 : s3)
		{
			cout << k1 << ",";
		}
	}

	void setReduce()
	{
		set<int> s3;
		int state;
		for (int k1 : s1)
		{
			state = 0;
			for (int k2 : s2)
			{
				if (k1 == k2)
				{
					state = 1;
				}
			}
			if (state != 1)
			{
				s3.insert(k1);
			}
		}
		for (int k1 : s2)
		{
			state = 0;
			for (int k2 : s1)
			{
				if (k1 == k2)
				{
					state = 1;
				}
			}
			if (state != 1)
			{
				s3.insert(k1);
			}
		}
		for (auto k1 : s3)
		{
			cout << k1 << ",";
		}
	}
};

int main()
{
	set<int> s1 = {};
	set<int> s2 = {};

	cout << "现在开始初始化集合1，请依次输入五个数字，按回车结束" << endl;
	for (int i = 0, a; i < 5; ++i)
	{
		cout << "请输入第" << i + 1 << "个数字>>>";
		cin >> a;
		s1.insert(a);
	}
	cout << "现在开始初始化集合2，请依次输入五个数字，按回车结束" << endl;
	for (int i = 0, a; i < 5; ++i)
	{
		cout << "请输入第" << i + 1 << "个数字>>>";
		cin >> a;
		s2.insert(a);
	}

	Set S(s1, s2);
	cout << "集合1:" << endl;
	S.printSet(1);
	cout << endl << endl << "集合2:" << endl;
	S.printSet(2);
	cout << endl << endl << "交集:" << endl;
	S.setEqual();
	cout << endl << endl << "差集:" << endl;
	S.setReduce();
	cout << endl << endl << "并集:" << endl;
	S.setUnion();

	return 0;
}
