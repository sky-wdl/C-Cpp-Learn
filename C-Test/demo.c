//#include <stdio.h>
//void inverp(char *a)
//{
//    if (*a=='\0')
//        return;
//    inverp(a+1);
//    printf("%c",*a);
//}
//int main(void)
//{
//    char s[10] = "hello!";
//    inverp(s);
//
//    return 0;
//}
#include <stdio.h>

void a(int m);
int main(void)
{
    int m=120;
    a(m);

    return 0;
}

void a(int m)
{
    int k=2;
    while(k <= m)
    {
        if(m%k==0)
        {
            printf("%d, ",k);
            m=m/k;
        }
        else
            k++;

    }
}