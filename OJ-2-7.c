//
// Created by Dongliu_Wen on 2022/9/29.
//
/*
 * 7. 统计学生成绩分布
输入一个正整数n，在输入n个学生的成绩。如果n<5,，输出人数不够。分别统计优秀、良好、中等、及格、不及格的人数。（注：优秀：>=90;良好：80<=成绩<90;
 中等：70<=成绩<80;及格:60<=成绩<70;不及格：<60）
 */

#include <stdio.h>

int main()
{
    int a,i,excellent,good,secondary,pass;
    scanf("%d",&a);
    if(a<5)
    {
        printf("人数不够\n");
        return 0;
    }

    int n[a];
    for(i=0, excellent=0,good=0,secondary=0,pass=0; i < a; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] >= 90)
        {
            excellent++;
        }
        else if(n[i]<90 && n[i]>=80)
        {
            good++;
        }
        else if(n[i]>=70&& n[i]<80)
        {
            secondary++;
        }
        else if(n[i]>=60&&n[i]<70)
        {
            pass++;
        }

    }

    printf("优秀：%d,良好：%d,中等:%d,及格：%d,不及格：%d",excellent,good,secondary,pass,(a-(excellent+good+secondary+pass)));

    return 0;
}