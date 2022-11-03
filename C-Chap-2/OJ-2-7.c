//
// Created by Dongliu_Wen on 2022/9/29.
//
/*
 * 7. 统计学生成绩分布
输入一个正整数n，在输入n个学生的成绩。如果n<5,，输出人数不够。分别统计优秀、良好、中等、及格、不及格的人数。（注：优秀：>=90;良好：80<=成绩<90;
 中等：70<=成绩<80;及格:60<=成绩<70;不及格：<60）
 */
/*
 * 【输入1】 1

【输出1】人数不够

【输入2】 6  100 100 100 100 100 100

【输出2】6 0 0 0 0 0

【输入3】 5  98 56 32 77 8

【输出3】1 1 1 0 2

ps:按照 优秀 良好 中等 及格 不及格 输出
 */


#include <stdio.h>

int main()
{
    int numberOfPeople=0,for_counts=0,excellent=0,good=0,secondary=0,pass=0;
    /*
     * numberOfPeople储存第一位数据，代表将要输出的成绩数量
     * for_counts用于在for循环中用于计算循环次数
     * excellent储存优秀成绩学生人数
     * good储存良好成绩学生人数
     * secondary储存中等成绩学生人数
     * pass储存及格成绩的学生人数
     */
    double achievement;//储存考试成绩的双精度浮点型变量

    scanf("%d", &numberOfPeople);
    if (numberOfPeople < 5) //判断人数是否小于5
    {
        printf("人数不够\n");
        return 0;
    }

    for(; for_counts < numberOfPeople; for_counts++)
    {
        scanf("%lf",&achievement);
        if (achievement >= 90)
        {
            excellent++;
        }
        else if(achievement < 90 && achievement >= 80)
        {
            good++;
        }
        else if(achievement >= 70 && achievement < 80)
        {
            secondary++;
        }
        else if(achievement >= 60 && achievement < 70)
        {
            pass++;
        }

    }

    printf("%d %d %d %d %d",excellent,good,secondary,pass,(numberOfPeople - (excellent + good + secondary + pass)));

    return 0;
}