#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (void)
{
	int i,all,ascii,random,seed,password[100];  //��������
	char word[100];
	FILE *fp;  //txtд��
	fp=fopen ("password.txt","w");
	if (fp!=NULL)
		printf ("������ܳ�д�뵽�ı��ļ���\n");

	printf ("�������ַ���:");
	scanf ("%s",&word);
	printf ("���������ƾ֤:");
	scanf ("%d",&seed);
	system ("cls");
	srand (seed);
	printf ("����:");
	fprintf (fp,"����:");
	for (i=0,all=strlen (word)-1;i<=all;i++)
	{
		ascii=(int) word[i];
		random=rand () %50+10;
		password[i]=ascii+random;  //��ASCII��������������
		printf ("%d-",password[i]);
		fprintf (fp,"%d-",password[i]);
	}
	fprintf (fp,"NONE");
	fclose(fp);  //�ر�fp
	printf ("NONE\n");
	printf ("�������\n");
	getchar ();
	getchar ();
	return 0;
}
