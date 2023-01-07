//
// Created by Dongliu_Wen on 2022/11/30.
//
#include "struct.h"
#include <stdio.h>

void display()
{
    if(studentNum==0)
    {
        printf("无学生信息...\n");
        goto A;
    }
    for (int i = 0; i < studentNum; ++i) {
        printf("第%d位学生\n学号：%d\n姓名：%s\n计算机、英文和数学成绩：%.2f %.2f %.2f\n\n",i+1,studentInformation[i].num,
               studentInformation[i].name, studentInformation[i].computer,studentInformation[i].english,
               studentInformation[i].math);
    }
    A:
    printf("");
}
