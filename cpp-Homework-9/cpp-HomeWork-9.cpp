//
// Created by Dongliu_Wen on 2022/10/27.
//
/* Copyright (c) 2022, Dongliu_Wen
 * All rights reserved.
 * File：cpp-Homework-9.cpp
 * Author：文东柳
 * Date：2022年 10 月 27 日
 * Version：v1.0
 */

#include <iostream>
using namespace std;

class Student
{
private:
    float score;
    static int count;
    static float total;

public:
    static float summation()
    {
        return Student::total;
    }
    static float average()
    {
        return Student::total/(float)Student::count;
    }
    void getScore(float a)
    {
        score=a;
        Student::total+=a;
    }
    static void getStudentNumber(int a)
    {
        Student::count=a;
    }
};

int Student::count=0;
float Student::total=0;

int main()
{
    cout << "ID:2004210523\n"<<"name:wendongliu"<<endl;
    int temp;
    cout<<"Enter Student number>";
    cin>>temp;
    Student student[temp];
    Student::getStudentNumber(temp);

    for(int i=0,score;i<temp;i++,score=0)
    {
        cout<<"\nEnter No."<<i+1<<" score>";
        cin>>score;
        student[i].getScore((float)score);
    }
    cout<<"\n\n"<<"Total is:"<<Student::summation()<<endl;
    cout<<"\n\n"<<"Average is:"<<Student::average()<<endl;

    return 0;
}