#include <stdio.h>

int fact(int n)
{
	if(n==0)
	{
		return 0;
	}
	int i,sum;
	for(i=1,sum=1;i<=n;++i)
	{
		sum=sum*i;
	}
	return sum+fact(n-1);
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
	
	return 0;
}

