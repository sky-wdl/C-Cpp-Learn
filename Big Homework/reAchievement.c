//
// Created by Dongliu_Wen on 2022/12/1.
//

#include <stdio.h>
#include "struct.h"

void reAchievement(int num)
{
    int computer, english, math;
    printf("请输入修改后的计算机、英文和数学成绩>");
    scanf("%f%f%f",&computer, &english, &math);
    studentInformation[num-1].computer = computer;
    studentInformation[num-1].english = english;
    studentInformation[num-1].math = math;
    printf("Done...\n");
}