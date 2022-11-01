//
// Created by Dongliu_Wen on 2021/9/24.
//

#include<stdio.h>

int fun_pass(int x)
{
    int a;
    if(x < 0) {
        a = -x;
        return a;
    }
}

int main()
{
    int a, b;

    for (int j = 0; j < 99; ++j) {
        printf("请输入第%d个数字：",(j+1));
        scanf("%d",&a);
        b = fun_pass(a);

    }

    return 0;
}