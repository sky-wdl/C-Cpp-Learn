/*
 * 【编程题】幼儿园有 N 个孩子玩游戏，随机围成了一个圈，老师最终想让所有男生排列到一起，所有女生排列到一起。每次老师可以命令两个孩子交换位置，求最小的命令次数：
描述

【编程题】幼儿园有 N 个孩子玩游戏，随机围成了一个圈，老师最终想让所有男生排列到一起，所有女生排列到一起。每次老师可以命令两个孩子交换位置，求最小的命令次数：

N<=100

语言限定：C++、Java、Golang


输入
3

FMF


输出
0


输入样例 1

3
FMF
输出样例 1

0
输入样例 2

4
FMFM
输出样例 2

1
 */

#include <iostream>

using namespace std;

int solution(int n, string s);
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<solution(n, s);

    return 0;
}

int solution(int n, string s)
{
    int max = 1;
    int M_cnt = 0;
    int sign = -1;

    if(s[0] == 'M' && s[n - 1] == 'M')
        max = 2;

    for (int i = 0; i < n; ++i)
    {
        if(s[i] == 'M')
        {
            M_cnt++;
            int cnt = i;
            int maxTemp = 1;
            while (s[cnt + 1] == 'M' && cnt < n - 1)
            {
                M_cnt++;
                maxTemp++;
                cnt++;
            }
            if(maxTemp > max)
            {
                max = maxTemp;
                sign = i;
            }
        }
    }

    if (sign == 0 && s[n - 1] == 'M' && M_cnt < n)
        max++;

    return M_cnt - max;
}


