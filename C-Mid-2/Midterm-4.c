//
// Created by Dongliu_Wen on 2022/11/10.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,temp,count=0;
    scanf("%d",&n);
    while (n!=0)
    {
        temp=(n%2)*pow(10,count)+temp;
        n/=2;
        count++;
    }
    printf("%d",temp);

    return 0;
}