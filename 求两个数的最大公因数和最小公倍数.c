//������������С������-շת�����
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	long int max,min,a,b,c;
	printf ("����������A:");
	scanf ("%ld",&a);
	printf ("����������B:");
	scanf ("%ld",&b);
	
	if (a>b)  //�Ƚ�A��B�Ĵ�С
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
	while (c!=0)  //շת�����
	{
		max=min;
		min=c;
		c=max%min;
	}
	printf ("�������������:%ld\n",min);
	printf ("��������С������:%ld\n",a*b/min);
	system ("pause");
	return 0;
}
