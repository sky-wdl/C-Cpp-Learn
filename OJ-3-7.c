//
// Created by Dongliu_Wen on 2022/10/12.
//
/*
 * 【问题描述】
假设税前工资和税率如下（s代表税前工资，t代表税率）：
s<1000    t=0%
1000<=s<2000      t=10%
2000<=s<3000  t=15%
3000<=s<4000     t=20%
4000<=s             t=25%
编写一程序，要求用户输入税前工资额，然后用switch语句计算税后工资额。
【输入形式】
从键盘输入税前工资s，可以是浮点数。
【输出形式】
输出税后工资额，保留小数后两位。
【输入样例】

3000
【输出样例】

2400.00
【样例说明】
税前工资为3000，所以税率为20％，扣除税后工资为2400.00
 */
#include <stdio.h>

int main() {
	int n = 0;
	float money = 0;
	scanf("%f", &money);
	if (money >= 4000) {
		n = 25;
	} else if (money >= 3000 && money < 4000) {
		n = 20;
	} else if (money >= 2000 && money < 3000) {
		n = 15;
	} else if (money >= 1000 && money < 2000) {
		n = 10;
	} else if (money < 1000) {
		n = 0;
	}

	switch (n)
	case (25): {
	{
		printf("%.2f", money * 0.75);
		break;
	}
	case (20): {
		printf("%.2f", money * 0.8);
		break;
	}
	case (15): {
		printf("%.2f", money * 0.85);
		break;
	}
	case (10): {
		printf("%.2f", money * 0.90);
		break;
	}
	case (0): {
		printf("%.2f", money);
		break;
	}
	}

	return 0;
}
