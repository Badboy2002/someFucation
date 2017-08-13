//随机移位加密-加密程序 V1.0基础版
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (void)
{
	int i,all,ascii,random,seed,password[100];  //声明变量
	char word[100];
	FILE *fp;  //txt写入
	fp=fopen ("password.txt","w");
	if (fp!=NULL)
		printf ("将会把密匙写入到文本文件中\n");

	printf ("请输入字符串:");
	scanf ("%s",&word);
	printf ("请输入加密凭证:");
	scanf ("%d",&seed);
	system ("cls");
	srand (seed);
	printf ("密文:");
	fprintf (fp,"密文:");
	for (i=0,all=strlen (word)-1;i<=all;i++)
	{
		ascii=(int) word[i];
		random=rand () %50+10;
		password[i]=ascii+random;  //对ASCII码进行随机数操作
		printf ("%d-",password[i]);
		fprintf (fp,"%d-",password[i]);
	}
	fprintf (fp,"NONE");
	fclose(fp);  //关闭fp
	printf ("NONE\n");
	printf ("程序结束\n");
	getchar ();
	getchar ();
	return 0;
}
