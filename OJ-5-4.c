#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;//ѭ���� 
	int n;//�����û����� 
	int a;//����ѭ������ĩβ�� 
	int b,c;//����ѭ����ǰ��λ�� 
	int state=0;//��ʾ��������1��������ĸ���λ�ε���������ͬ 
	int count=0;//��¼������������������ 
	scanf("%d",&n);
	
	for(i=101;i<=n;++i,state=0)
	{
		a=i%10;//���һλ�� 
		b=i/10;
		c=b%10;//�ڶ�λ�� 
		b=b/10;//��һλ�� 
		
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

