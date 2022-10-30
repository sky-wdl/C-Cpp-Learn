/*
* 输入10个人的名字，按字符串长度从大到小排序输出。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[10], temp;
    cout << "Enter ten names>";

    for (int i = 0; i < 10; i++)
    {
        cin >> name[i];
    }

    for (int a = 10; a > 0; a--)
    {
        for (int i = 1; i < 10; i++)
        {
            if ((name[i - 1]).length() < (name[i]).length())
            {
                temp = name[i];
                name[i] = name[i - 1];
                name[i - 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << i+1<<":" << name[i] << endl;
    }

    return 0;
}