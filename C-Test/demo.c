#include <stdio.h>

int fn(int a,int n);
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int x;
    x=fn(a,n);
    printf("sum=%d",x);

    return 0;
}

int fn(int a,int n)
{
    int x,sum=0;
    for(x=0;x<n-1;x++)
    {
        if(x!=0)
        {
            a=a*10+a;
            sum+=a;
        }
        else
        {
            sum=a;
        }
    }

    return sum;
}

