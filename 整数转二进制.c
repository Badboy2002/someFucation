#include <stdio.h>
int int_to_binary (int number);
int main (void)
{
	int num;
	printf ("Please input number:");
	while (scanf ("%d",&num)==1)
	{
		int_to_binary (num);
		printf ("请输入一个整数:");
	}
	printf ("Bye.\n");
	return 0;
}

int int_to_binary (int number)
{
	int bin[100],mark=0;
	printf ("调用函数中......\n");
	while (number>0)
	{
		printf ("number=%d mark=%d di=%d\n",number,mark,number%2);
		bin[mark]=number%2;
		number=number/2;
		mark++;
	}
	mark--;
	printf ("打印结果\n二进制:");
	while (mark>=0)
	{
		printf ("%d",bin[mark]);
		mark--;
	}
	printf ("\n");
	return 0;
	
}
