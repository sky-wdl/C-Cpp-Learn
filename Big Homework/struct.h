//
// Created by Dongliu_Wen on 2022/11/30.
//

#ifndef STRUCTURAL_STRUCT_H
#define STRUCTURAL_STRUCT_H

static int studentNum = 0;
int ID;
struct student
{
    int num;
    char name[10];
    float computer, english, math;
    char grade;
};
struct student studentInformation[30];

void display();                         //显示所有学生信息
void search(int num);         //查找特定学生的信息
void input();                           //批量导入
void sort();                            //排序
void setGrade();                        //设置等级
void reAchievement(int num);            //更改成绩
void getAverAndFail();                  //统计平均分和不及格人数
void getFile();                         //从文件中加载数据
void saveFile();                        //保存数据到文件中

#endif