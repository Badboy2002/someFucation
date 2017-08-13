//素数检测 if it is prime 
#include <stdio.h> 
unsigned long int isprime (unsigned long int number);
int main (void)
{
	unsigned long int num,test,mark;
	printf ("Please input number(q to quit):");
	while (scanf ("%d",&num)==1)
	{
		test=num;
		while (test<=num&&test>0)
		{
			mark=isprime (test);
			if (mark!=0)
				printf ("%d is lower prime\n",mark);
			test--;
		}
		printf ("Please input another number:");
	}
	getchar ();
	getchar ();
	return 0;
}
unsigned long int isprime (unsigned long int number)
{
	unsigned long int div,sum;
	for (sum=0,div=2;div*div<=number;div++)
	{
		if (number%div==0)
			return 0;
	}
	return number;
}
