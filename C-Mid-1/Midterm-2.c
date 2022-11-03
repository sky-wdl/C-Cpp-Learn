//
// Created by Dongliu_Wen on 2022/10/27.
//
/*
 *汽水可乐

有这样一道智力题：“某商店规定：三个空汽水瓶可以换一瓶汽水。小张的手上有十个空汽水瓶，她最多可以换多少瓶汽水喝？”答案是5瓶，方法如下：先用9个空瓶子换3瓶汽水，喝掉3瓶满的，喝完以后4个空瓶子，用3个再换一瓶，喝掉这瓶满的，这时候剩2个空瓶子。然后你让老板先借给你一瓶汽水，喝掉这瓶满的，喝完以后用3个空瓶子换一瓶满地还给老板。如果小张的手上有n个空汽水瓶，最多可以换多少瓶汽水喝？


输入例子:

3

输出例子:

1
 */
#include <stdio.h>

int main()
{
    int emptyBottle=0;
    int bottle=0;
    int count=0;
    scanf("%d",&emptyBottle);

    do {
        if(emptyBottle==2)
        {
            emptyBottle++;
            bottle--;
        }
        bottle = emptyBottle / 3;
        count+=bottle;
        emptyBottle = emptyBottle % 3 + bottle;
    }while(emptyBottle>=2);

    printf("%d",count);

    return 0;
}