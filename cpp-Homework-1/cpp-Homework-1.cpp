/*
输入若干数据，找出最大值输出。（键盘和文件读取）
*/

/*
Author:文东柳
Class:计算机12005
StuNum:2004210523
Date:29/9/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int num[10], x;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the " << i + 1 << "th " << "integer >";
        cin >> num[i];
    }

    x = num[0];
    for (int i = 0; i < 10; i++)
    {
        if (x < num[i])
        {
            x = num[i];
        }
    }

    cout << "Max num is " << x << endl;

    return 0;
}