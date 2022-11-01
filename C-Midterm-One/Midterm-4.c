//
// Created by Dongliu_Wen on 2022/10/27.
//
/*
 *
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    double eps=0;
    double x=0;
    scanf("%lf",&eps);
    for(int i=0,count=1;;i++,count+=2)
    {
        x = x+pow(-1,i)*(1.0/(sqrt(3)*pow(3,i)*count));
        if(fabs(pow(-1,i)*(1.0/(sqrt(3)*pow(3,i)*count)))<eps)
        {
            break;
        }
    }
    printf("pi=%f",x*6.0);

    return 0;
}

