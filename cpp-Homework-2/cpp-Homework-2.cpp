/*
day（0~6）代表每月第一天起始位置，stop代表每月天数，每天之间空两个空格。输入不同的day和stop，输出每月日历的样子。假设day为2，stop为31
*/

/*
Author:文东柳
Class:计算机二学位12005
StuNum:2004210523
Date:29/9/2022
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int day, stop;
    string space_3 = "   ";
    string space_2 = "  ";
    cout << "Enter day>";
    cin >> day;
    cout << "Enter stop>";
    cin >> stop;
    cout << "Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;

    for (int i = 0,x=0,y=1; y <= stop; i++)
    {
        if (x == 7)
        {
            cout << endl;
            x = 0;
        }
        else if (i < day)
        {
            cout << space_3 << space_2;
            x++;
            continue;
        }
        else
        {
            cout << setiosflags(ios::right);
            cout.width(3);
            cout.fill();
            cout << y;
            cout << space_2;
            x++;
            y++;
        }
    }

    return 0;
}