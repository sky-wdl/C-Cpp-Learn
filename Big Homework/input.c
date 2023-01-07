//
// Created by Dongliu_Wen on 2022/12/1.
//
#include "struct.h"
#include <stdio.h>

void input()
{
    A:
    printf("请输入学生人数>");
    scanf("%d",&studentNum);
    if(studentNum>30)
    {
        printf("人数超过三十了，请重新输入...\n");
        goto A;
    }
    else if(studentNum <= 0)
    {
        printf("人数小于等于0，数量有误，请重新输入...\n");
        goto A;
    }

    for (int i = 0; i < studentNum; ++i)
    {
        printf("请输入第%d学生的名字>",i+1);
        scanf("%s",studentInformation[i].name);
        printf("请输入计算机、英文和数学的成绩>");
        scanf("%f%f%f",&studentInformation[i].computer, &studentInformation[i].english,
              &studentInformation[i].math);
    }
    printf("Done...\n");
}