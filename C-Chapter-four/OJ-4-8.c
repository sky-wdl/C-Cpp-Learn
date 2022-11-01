//
// Created by Dongliu_Wen on 2022/10/19.
//
/*
 * 百钱买百鸡
“百钱买百鸡”是中国古代一个著名的枚举法题目。所谓枚举就是将所有可能的情况全部列出来的意思。for 循环嵌套是实现枚举的一种手段，上面的换算也是一种枚举。假设公鸡 5 元一只，母鸡 3 元一只，小鸡 1 元 3 只，现在给你 100 元，要你买回 100 只鸡，求出公鸡、母鸡、小鸡分别为多少只。

//x、y、z 分别表示公鸡、母鸡、小鸡

【输出 x = 0, y = 25, z = 75】
 */
#include <stdio.h>

int main(void)
{
    for (int x = 0; x <= 100; x+=5)
    {
        for (int y = 0; y <= (100-x); y+=3)
        {
            for (int z = 0; z <= (100-x-y); ++z)
            {
                if(x/5+y/3+z*3==100 && (x+y+z)==100)
                    printf("x = %d, y = %d, z = %d\n",x/5,y/3,z*3);
            }
        }
    }

    return 0;
}