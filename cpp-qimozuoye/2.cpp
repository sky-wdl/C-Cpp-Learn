//
// Created by Dongliu_Wen on 2022/12/17.
//
/*
 * 编写程序，定义一个抽象基类Person，Person类有纯虚成员函数Display，从Person分别派生出Teacher和Student类，它们都只有数据成员name。
 */
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    virtual void Display();
};
void Person::Display(){}

class Teacher:public Person
{
private:
    string name;
public:
    void Display();
    Teacher(string str);
};
void Teacher::Display() {cout<<"I am a teacher!";}
Teacher::Teacher(string str) {this->name = str;}

class Student:public Person
{
private:
    string name;
public:
    void Display();
    Student(string str);
};
void Student::Display() {cout<<"I am a student!";}
Student::Student(string str) {this->name = str;}

int main()
{
    Teacher teacher("Teacher");
    Student student("Student");

    teacher.Display();
    student.Display();

    return 0;
}
