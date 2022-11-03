//
// Created by Dongliu_Wen on 2022/11/3.
//
/*
 * 本题要求编程实现一个继承体系，定义一个抽象基类Vehicle，含私有数据成员车速speed，车轮数量wheel。从Vehicle派生出自行车类Bicycle、汽车类Car；
 * 从Bicycle和Car中派生出摩托车类Motocycle。
 * （1）请定义以上类并定义相应构造函数完成数据成员初始化；（8分）
 *
 * （2）给以上各类都定义一个Display成员函数，输出数据成员speed和wheel，输出格式如下:
 *
 * cout<<"类名："<<speed<","<<wheel<<endl；  具体实现时“类名”替换成对应的类名。（4分）
 */
#include <iostream>
using namespace std;

class Vehicle
{
private:
    int speed;
    //车速
    int wheel;
    //车轮数量

public:
    virtual void display() = 0;
    Vehicle()
    {
        speed=0;
        wheel=0;
    }
};

class Bicycle:public Vehicle
{
private:
    int speed;
    //车速
    int wheel;
    //车轮数量
public:
    Bicycle()
    {
        speed=10;
        wheel=2;
    }
    void display()
    {
        cout<<"Bicycle:"<<speed<<","<<wheel<<endl;
    }
};

class Car:public Vehicle
{
private:
    int speed;
    //车速
    int wheel;
    //车轮数量
public:
    Car()
    {
        speed=60;
        wheel=4;
    }
    void display()
    {
        cout<<"Car:"<<speed<<","<<wheel<<endl;
    }
};

class Motocycle:public Bicycle,Car
{
private:
    int speed;
    //车速
    int wheel;
    //车轮数量
public:
    Motocycle()
    {
        speed=30;
        wheel=2;
    }
    void display()
    {
        cout<<"Motocycle:"<<speed<<","<<wheel<<endl;
    }
};

int main(void)
{
    Bicycle bicycle;
    bicycle.display();

    Car car;
    car.display();

    Motocycle motocycle;
    motocycle.display();

    return 0;
}