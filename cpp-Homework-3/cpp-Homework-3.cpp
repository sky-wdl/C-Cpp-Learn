/*
设计一个函数print打印字符串，如果只传string型参数s，则字符串长度跟10比较，大于10，打印前10个字符，小于10，全部输出s；如果传string型参数s和int型n，则字符串长度跟n比较，大于n，打印前n个字符，小于n，全部输出s。
*/
#include <iostream>
#include <string>

using namespace std;

void print(string s, int n)
{
    if (n == -1 && s.length() >10)
    {
        for (int for_count = 0; for_count < 10; for_count++)
        {
            cout<<s[for_count];
        }
    }
    else if (n == -1 && s.length() <= 10)
    {
        cout << s;
    }
    else if (n != -1 && s.length() > n)
    {
        for (int for_count = 0; for_count < n; for_count++)
        {
            cout << s[for_count];
        }
    }
    else if (n != -1 && s.length() <= n)
    {
        cout << s;
    }
}

int main()
{
    string s="";
    int n;
    cout << "Enter a string and an integer. If you do not enter an integer, enter - 1.>";
    cin >> s >> n;
    print(s,n);

    return 0;
}