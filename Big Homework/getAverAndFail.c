//
// Created by Dongliu_Wen on 2022/12/1.
//
#include <stdio.h>
#include "struct.h"

void getAverAndFail()
{
    float sum;
    int failNum = 0;
    if(studentNum == 0)
    {
        printf("没有学生信息，Error...\n");
        goto A;
    }
    for (int i = 0; i < studentNum; ++i)
    {
        sum += studentInformation[i].computer;
        if(studentInformation[i].computer < 60.0)
            failNum++;
    }

    printf("Aver:%.2f,Fail:%d",sum/studentNum, failNum);

    A:
    printf("");
}