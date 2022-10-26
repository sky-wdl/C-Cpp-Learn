#include <stdio.h>

int loop(int x)
{
	int num=0;
	int num_x=x;
	while(x!=0)
	{
		num=num*10+(x%10);
		x/=10;
	}
	if(num==num_x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	int x,x1,i;
	scanf("%d%d",&x,&x1);
	for(i=x;i<=x1;++i)
	{
		if(loop(i) && i%2==0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
	
}

