//
// Created by Dongliu_Wen on 2022/12/1.
//
#include <stdio.h>
#include "struct.h"

void search(int num)
{
    printf("第%d位学生\n学号：%d\n姓名：%s\n计算机、英文和数学成绩：%.2f %.2f %.2f\n\n",num-1,studentInformation[num-1].num,
           studentInformation[num-1].name, studentInformation[num-1].computer,studentInformation[num-1].english,
           studentInformation[num-1].math);
}