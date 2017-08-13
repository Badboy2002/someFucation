//求两个数的最小公倍数-辗转相除法
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	long int max,min,a,b,c;
	printf ("请输入数字A:");
	scanf ("%ld",&a);
	printf ("请输入数字B:");
	scanf ("%ld",&b);
	
	if (a>b)  //比较A和B的大小
	{
		max=a;
		min=b;
	}
	else 
	{
		max=b;
		min=a;
	}

	c=max%min;
	while (c!=0)  //辗转相除法
	{
		max=min;
		min=c;
		c=max%min;
	}
	printf ("两数的最大公因数:%ld\n",min);
	printf ("两数的最小公倍数:%ld\n",a*b/min);
	system ("pause");
	return 0;
}
