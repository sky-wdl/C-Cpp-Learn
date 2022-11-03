#include <stdio.h>

void isprime(int n)
{
	int i,state;
	for(i=2,state=-1;i<n;++i)
	{
		if(n%i==0)
		{
			state=1;
			break;
		}
	}
	if(state==-1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}

}

int main()
{
	int n;
	scanf("%d",&n);
	isprime(n);
	
	return 0;
}

