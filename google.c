//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
#include <stdio.h>
 
int f(int n)
{
	int num =0;
	
	int tmp,rem,base;
	base =1;
	tmp = n;
	
	while(tmp)
	{
		rem = tmp%10;
		tmp = tmp/10;
		if(rem == 0)
		{
			num+=base*tmp;
		}
		else if(rem == 1)
		{
			num  = num + (n - (int)(n/base)*base +1 + tmp*base);
		}
		else
			num += (tmp+1)*base;
		base *= 10;
	}
	
	return num;
}

int main()
{
	int k;
	for(k=2; f(k)!=k; k++)
		continue;
	printf("%d",k);
	return 0;
}
