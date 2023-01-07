//
// Created by Dongliu_Wen on 2023/1/4.
//
/*
 *  距离冬奥会
【问题描述】

北京冬奥会是2022年2月4日。编写一个程序，用户输入日期，计算该日期距离冬奥会还有多少天。

要求使用结构
struct Date {
   int year;
   int month;
   int day;
};

【输入形式】

用户在第一行输入一个日期（年 月 日,中间以空格分割）
【输出形式】

程序在下一行输出一个整数
【样例输入】

2022 2 3
【样例输出】

1
【样例说明】

用户以年月日的格式输入，中间以空格分割，程序计算出该天是输入年份的第几天并输出该天数。另外还需要判断这一年是否为闰年。
 */

#include <stdio.h>

typedef struct Date {
   int year;
   int month;
   int day;
}A;

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

int main(void)
{
	A a;
    scanf("%d%d%d",&a.year, &a.month, &a.day);
    printf("%d\n", day_diff(a.year, a.month, a.day, 2022, 2, 4));

	return 0;
}


