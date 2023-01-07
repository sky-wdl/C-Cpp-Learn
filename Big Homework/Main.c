//
// Created by Dongliu_Wen on 2022/11/30.
//

#include <stdio.h>
#include "struct.h"

int main(void)
{
    while(1)
    {
        int sel, temp;
        printf("\n\n");
        printf("        1.显示所有学生信息\n");
        printf("        2.查找学生信息\n");
        printf("        3.批量信息录入\n");
        printf("        4.依照成绩排序\n");
        printf("        5.设置等级\n");
        printf("        6.成绩修改（依据学号）\n");
        printf("        7.统计平均分和不及格人数\n");
        printf("        8.从文件中加载数据\n");
        printf("        9.保存数据到文件\n");
        printf("        0.退出\n");
        printf("请选择菜单编号>");
        scanf("%d",&sel);
        switch (sel)
        {
            case 1:
            {
                display();
                break;
            }
            case 2:
            {
                A:
                printf("输入学生的序号（学号）>");
                scanf("%d",&temp);
                if(temp <= 0 || temp > studentNum)
                {
                    printf("输入有误，重新输入...\n");
                    goto A;
                }
                search(temp);
                break;
            }
            case 3:
            {
                input();
                break;
            }
            case 4:
            {
                sort();
                break;
            }
            case 5:
            {
                setGrade();
                break;
            }
            case 6:
            {
                printf("请输入要修改成绩的学生学号>");
                scanf("%d",&temp);
                reAchievement(temp);
                break;
            }
            case 7:
            {
                getAverAndFail();
                break;
            }
            case 8:break;
            case 9:break;
            case 0:return 0;
            default:
                printf("输入有误请重新输入...");
        }
    }
}