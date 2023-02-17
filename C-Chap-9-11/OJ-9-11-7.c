//
// Created by Dongliu_Wen on 2023/2/13.
//
/*
 *  计算日期差
【问题描述】
结构
struct Date {
   int year;
   int month;
   int day;
};
利用该结构编写一个程序用来计算两个日期之间相差的天数。

【输入形式】
输入两个日期，每个日期分占一行，在一行中日期的年、月、日是三个整数，以空格分隔。并假设第二个日期大于或等于第一个日期。
【输出形式】
第二个日期与第一个日期间相差的天数。
【输入样例】

2003 3 25
2003 3 29
【输出样例】

4
 */

//解法来自csdn:https://blog.csdn.net/a_ran/article/details/43601699

#include <stdio.h>

struct Date {
   int year;
   int month;
   int day;
};

int day_diff(int year_start, int month_start, int day_start
			, int year_end, int month_end, int day_end)
{
	int y2, m2, d2;
	int y1, m1, d1;

	m1 = (month_start + 9) % 12;
	y1 = year_start - m1/10;
	d1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (day_start - 1);

	m2 = (month_end + 9) % 12;
	y2 = year_end - m2/10;
	d2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (day_end - 1);

	return (d2 - d1);
}

int main(void) {
    struct Date a, b;
    //int month1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //int month2[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //int a_Day = 0;
    //int b_Day = 0;

    scanf("%d%d%d", &a.year, &a.month, &a.day);
    scanf("%d%d%d", &b.year, &b.month, &b.day);

    printf("%d\n", day_diff(a.year, a.month, a.day, b.year,
                            b.month, b.day));

    {
//    //第一个日期的天数
//    if(a.year % 400 == 0 || (a.year % 100 != 0 && a.year % 4 == 0)){
//        for (int i = a.month - 2; i >= 0 ; --i) {
//            a_Day += month2[i];
//        }
//        a_Day += a.day;
//    }
//    else{
//       for (int i = a.month - 2; i >= 0 ; --i) {
//            a_Day += month1[i];
//        }
//        a_Day += a.day;
//    }
//
//    //第二个日期的天数
//    if(b.year % 400 == 0 || (b.year % 100 != 0 && b.year % 4 == 0)){
//        for (int i = a.month - 2; i >= 0 ; --i) {
//            b_Day += month2[i];
//        }
//        b_Day += b.day;
//    }
//    else{
//       for (int i = b.month - 2; i >= 0 ; --i) {
//            b_Day += month1[i];
//        }
//        b_Day += b.day;
//    }
//
//    /*
//     * 判断两个日期是否是同一年
//     * 是则用天数相减
//     * 否则计算相差年数，并注意gap year中出现闰年的情况
//     */
//    if(a.year == b.year)
//        printf("%d",b_Day-a_Day);
//    else if(b.year - a.year == 1)
//
//    return 0;
    }
    return 0;
}