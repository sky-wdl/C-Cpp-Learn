#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;//循环数 
	int n;//储存用户输入 
	int a;//储存循环数的末尾数 
	int b,c;//储存循环数前两位数 
	int state=0;//标示变量，非1则这个数的各个位次的数均不相同 
	int count=0;//记录符合条件的数字数量 
	scanf("%d",&n);
	
	for(i=101;i<=n;++i,state=0)
	{
		a=i%10;//最后一位数 
		b=i/10;
		c=b%10;//第二位数 
		b=b/10;//第一位数 
		
		if(c==a || b==a || c==b)
		{
			state=1;
		}
		if(sqrt(i)==(int)sqrt(i) && state==1)
		{
			count++;
		}
	}
	printf("%d",count);
	
	return 0;
}

