//
// Created by Dongliu_Wen on 2022/12/29.
//
/*
 * 学生记录
【问题描述】
从键盘中读入最多不超过50个学生的学生信息（包括空格隔开的姓名、学号、年龄信息，以学号从低到高排序）
【输入形式】
每次键盘读入最多不超过50个学生的学生信息：
第一行为学生人数；
后面每一行为空格隔开的学生学号、姓名、年龄，其中学号和年龄都是整数。
【输出形式】
分别以姓名顺序（从低到高）和年龄顺序（从低到高）将学生信息输出，每行输出一位学生的信息，其中学号占3位，姓名（英文）占6位，年龄占3位，均为右对齐。年龄相同时按姓名从低到高排序。两种顺序的输出结果用一行空行相隔。
【输入样例】

4
1 aaa 22
45 bbb 23
54 ddd 20
110 ccc 19
【输出样例】

1    aaa     22
45     bbb     23
110     ccc     19
54     ddd     20
110     ccc     19
54     ddd     20
1     aaa     22
45     bbb     23
【样例说明】
从键盘输入四个学生记录，分别按姓名和年龄排序并输出。
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
    {
        int id;
        char stuName[10];
        int age;
    }stuIn;

stuIn * setStuIn(stuIn * a, int id, char name[], int age);

int main(void)
{
    int count;
    scanf("%d", &count);
    stuIn  * stu[count];

    for (int i = 0; i < count; ++i)
    {
        int id = 0;
        char name[10] = {'\0'};
        int age = 0;

        stu[i] = (stuIn*)malloc(sizeof(stuIn));
        scanf("%d %s %d",&id, name, &age);
        stu[i] = setStuIn(stu[i], id, name, age);
    }

    for (int i = 0; i < count; ++i)
    {
        stuIn * temp = NULL;
        for (int j = i; j < count; ++j)
        {
            if(strcmp(stu[i]->stuName,stu[j]->stuName) > 0)
            {
                temp = stu[j];
                stu[j] = stu[i];
                stu[i] = temp;
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        if(i == 0)
            printf("%3d%6s%3d", stu[i]->id, stu[i]->stuName, stu[i]->age);
        else
            printf("\n%3d%6s%3d", stu[i]->id, stu[i]->stuName, stu[i]->age);
    }

    printf("\n");

    for (int i = 0; i < count; ++i)
    {
        stuIn * temp = NULL;
        for (int j = i; j < count; ++j)
        {
            if((stu[i]->age) > (stu[j]->age))
            {
                temp = stu[j];
                stu[j] = stu[i];
                stu[i] = temp;
            }
        }
    }
    for (int i = 0; i < count; ++i)
    {
        printf("\n%3d%6s%3d", stu[i]->id, stu[i]->stuName, stu[i]->age);
    }

    return 0;
}

stuIn * setStuIn(stuIn * a, int id, char name[], int age)
{
    a->id = id;
    strcpy(a->stuName,name);
    a->age = age;

    return a;
}
