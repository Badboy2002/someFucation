#include <stdio.h>
int int_to_binary (int number);
int main (void)
{
	int num;
	printf ("Please input number:");
	while (scanf ("%d",&num)==1)
	{
		int_to_binary (num);
		printf ("������һ������:");
	}
	printf ("Bye.\n");
	return 0;
}

int int_to_binary (int number)
{
	int bin[100],mark=0;
	printf ("���ú�����......\n");
	while (number>0)
	{
		printf ("number=%d mark=%d di=%d\n",number,mark,number%2);
		bin[mark]=number%2;
		number=number/2;
		mark++;
	}
	mark--;
	printf ("��ӡ���\n������:");
	while (mark>=0)
	{
		printf ("%d",bin[mark]);
		mark--;
	}
	printf ("\n");
	return 0;
	
}
