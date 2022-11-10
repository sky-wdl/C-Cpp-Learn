/*
 * 实现十进制转二进制

【问题描述】

实现十进制转二进制：输入一个正整数 n，将其转换为二进制后输出。要求定义并调 用函数 dectobin(n)，它的功能是输出 n 的二进制。试编写相应程序。


【输入形式】
【输出形式】
【样例输入】

6
【样例输出】

110
【样例说明】
【评分标准】
 */
#include <stdio.h>
#include <math.h>

void dectobin(int n);
int main()
{
    int n;
    scanf("%d",&n);
    dectobin(n);

    return 0;
}

void dectobin(int n)
{
    int temp=0,count;
    for(count=0;n!=0;count++)
    {
        temp=(n%2)*(pow(10,count))+temp;
        int b=pow(10.0,count);
        n=n/2;
    }
    printf("%d",temp);
}
//n temp
//3 0
//1 10
//0 110

