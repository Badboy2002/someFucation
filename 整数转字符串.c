#include <stdio.h>
#include <string.h>
int main (void)
{
	char temp[10],tmp[10];
	int j=0,in=2147483647,len,k;
	while (in>0)  
	{
		temp[j]=in%10+48; //int转string 需要+48 
		in=in/10;
		j++;
	}
	temp[j]='\0';
	j--;
 	len=strlen (temp);
	for (k=0;k<len;k++,j--)
	{
	 tmp[k]=temp[j];
	}
	tmp[k]='\0';
	printf ("%s",tmp);
	return 0;
	
}