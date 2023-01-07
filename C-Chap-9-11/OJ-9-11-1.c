//
// Created by Dongliu_Wen on 2022/12/4.
//
/*
 *查找书籍：
【问题描述】

查找书籍：从键盘输入n(n<10)本书的名称和定价，从中查找定价最高书的名称，并输出。试编写相应程序。


【输入形式】

n

n本书的书名和定价

【输出形式】



【样例输入】

3

C程序设计

40.8

Tom and Jarry

18.95

三体

35.8


【样例输出】

C程序设计


 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int quantity;
    scanf("%d",&quantity);

    char book[20] = {'\0'}, bookTemp[20] = {'\0'};
    float price = 0, priceTemp = 0;

    for (int i = 0; i < quantity; ++i)
    {
        /*
         * 清除覆盖掉脏/之前的数据
         */
        for (int j = 0; bookTemp[j] != '\0'; ++j)
        {
            bookTemp[j] = '\0';
        }

        /*
         * 读取书名
         */
        char ch;
        int k = 0;
        getchar();//用于清除掉缓存区的回车
        while((ch = getchar()) != '\n')
        {
            bookTemp[k] = ch;
            k++;
        }

        /*
         * 读取价格
         */
        scanf("%f", &priceTemp);

        /*
         * 进行价格的比较并单独记录价格较高的那本书的名字
         */
        if(priceTemp > price)
        {
            for (int j = 0; book[j] != '\0'; ++j)
            {
                book[j] = '\0';
            }
            strcpy(book,bookTemp);
            price = priceTemp;
        }
    }

    printf("%s", book);

    return 0;
}