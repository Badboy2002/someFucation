//����Сд��� ����:section ����precision  �ݺ���power function ���� equation 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> 
double count (char st[][10],double x); // ��;�������� ����:st[]Ϊ�Ѳ�ֺõ��ַ������� ����2^x, xΪ���е�ֵ ����ֵ:���ʽ��ֵ 
int main (void)
{
	int mark=0,i=0,j=0,k=1,n;  //�����±� mark:��ȡ���� i: part[i][]1ά���ʽ���-i�ű��ʽ  j:part[i][j]2ά�ַ����-i�ű��ʽ�е�j���ַ�  k:���ű���±�  n:�ܼӼ�ʱ���±� 
 	int symbol[10]={0}; //0Ϊ�� 1Ϊ�� ��Ϊ���ű�ʶ   
	int difference; //differenceΪ��ַ��ֵ ���ڴ����ַ��� 
	char equation[100]; //�����û�����
	char part[10][10],temp[10];  //part:��ֺ�ı��ʽ  temp�ַ���ת��ֵ��תֵ 
	char * adr,* ptp; //��ַ���� 
	double vaule[10]={0,0},result1=0,result2=0;   //�洢���
	double sectionA,sectionB,sectionC,precision; 
	
   //���Խ׶ζ��� 
	sectionA=-100;
	sectionB=100;
	precision=0.01;
	
	printf ("�����뷽��:");
	scanf ("%s",&equation);
	fflush (stdin);
	printf ("����������A:");
	scanf ("%lf",&sectionA);
	fflush (stdin);
	printf ("����������B:");
	scanf ("%lf",&sectionB);
	fflush (stdin);
	printf ("�����뾫��:");
 	scanf ("%lf",&precision);
		
	//���ַ������в��,��+,-Ϊ�ָ��� 
	while (equation[mark]!='=')
	{
		if (equation[mark]!='-'&&equation[mark]!='+') //����ַ���Ϊ+�Ҳ�Ϊ- �ͽ�������part���ʽ��  ��ά�ַ���Ǻ����Ա��ȡ��һ���ַ� 
			{
				part[i][j]=equation[mark];
				j++;
			}
		else if (equation[mark]=='-')
		{
			part[i][j]='\0';  //�����,���·��� һά���ʽ��Ǻ��� ��ά�ַ�������� ���ű�Ǻ��� 
		 	symbol[k]=1;
			k++;
			i++;
			j=0;
		}
		else if (equation[mark]=='+')
		{
			part[i][j]='\0';  //�����,���·��� һά���ʽ��Ǻ��� ��ά�ַ�������� ���ű�Ǻ��� 
		 	symbol[k]=0;
			k++;
			i++;
			j=0;
		}
		
		mark++;  //�ַ�����Ǻ��� 
	}
	part[i][j]='\0';
	printf ("�ַ�����ֽ���\n");
	printf ("���̱�ʶ��Ϊ:");
	for (n=0;n<=i;n++)
	{
		if (symbol[n]==0)
		printf ("+");
		else if (symbol[n]==1)
		printf ("-"); 
		printf("%s",part[n]);

	}
	printf ("=0\n");

 
	while (fabs (sectionB-sectionA)>precision)
	{
	//while start
	result1=0;
	result2=0;
	sectionC=(sectionA+sectionB)/2;
	
	for (n=0;n<=i;n++) //����ȡֵΪAʱ ���̵�ֵ 
	{
		if ( strrchr (part[n],'^') ) //�ݱ�Ǽ�⣬(�����^)������count ()���� 
			{
				vaule[n]=count (part[n],sectionA);
				if (symbol[n]==1)  //���� 
					vaule[n]=-vaule[n];
				result1=result1+vaule[n];
				continue;
			}
			
		else if  (strrchr (part[n],'x')==NULL) //�������� (û��x��Ϊ������),ֱ�Ӹ�ֵ 
			{
				vaule[n]=atof (part[n]);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
				result1=result1+vaule[n];
				continue;
			}
		else if (strrchr (part[n],'x') &&strrchr (part[n],'^')==NULL) //ϵ������ (��x��û��^) ����ϵ�� ����section 
		{
			adr=strrchr (part[n],'x'); //����xλ��
			ptp=part[n];  //������ʼ��ַ
			strncpy (temp,part[n],adr-ptp);  //��ȡ�ַ��� 
			vaule[n]=atof (temp);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
			vaule[n]=vaule[n]*sectionA; //���� 
			result1=result1+vaule[n];
		}
	}
	printf ("result1=%lf\n",result1);
	for (n=0;n<=i;n++) //����ȡֵΪCʱ ���̵�ֵ 
	{
		if ( strrchr (part[n],'^') ) //�ݱ�Ǽ�⣬(�����^)������count ()���� 
			{
				vaule[n]=count (part[n],sectionC);
				if (symbol[n]==1)  //���� 
					vaule[n]=-vaule[n];
				result2=result2+vaule[n];
				continue;
			}
			
		else if  (strrchr (part[n],'x')==NULL) //�������� (û��x��Ϊ������),ֱ�Ӹ�ֵ 
			{
				vaule[n]=atof (part[n]);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
				result2=result2+vaule[n];
				continue;
			}
		else if (strrchr (part[n],'x') &&strrchr (part[n],'^')==NULL) //ϵ������ (��x��û��^) ����ϵ�� ����section 
		{
			adr=strrchr (part[n],'x'); //����xλ��
			ptp=part[n];  //������ʼ��ַ
			strncpy (temp,part[n],adr-ptp);  //��ȡ�ַ��� 
			vaule[n]=atof (temp);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
			vaule[n]=vaule[n]*sectionC; //���� 
			result2=result2+vaule[n];
		}
	}//for end
	printf ("result2=%lf\n",result2);
	printf ("sectionA=%lf sectionB=%lf sectionC=%lf\n",sectionA,sectionB,sectionC);
	if (result1*result2<0)
		{
			sectionB=sectionC;
			continue;
		}
	else
  {
		
	if (result2==0)
		{
			sectionA=sectionC;
			break;
		}
	else
	{
		sectionA=sectionC;
		continue;
	}
  }
	}//while end
	printf ("result1=%lf\n",result1);
	printf ("result2=%lf\n",result2);
	printf ("���̵Ľ�Ϊ:%lf\n",sectionC);
	return 0;	
}


double count (char st[][10],double x)
{
	int diff,diff1;
	char * ar,* pt,number[20];
	double a=0,back=0; 
	pt=st[0];
	ar=strrchr (st[0],'^');
	diff=ar-pt;
	if	(*(ar+1)=='x')
		{
			strncpy(number,st[0],diff);
			a=atof (number);
			back=pow (a,x);
			return back;
		}
	else
		{
			diff1=strlen(st[0])-diff-1;	
			strncpy(number,st[0]+diff,diff);
			a=atof (number);
			back=pow (x,a);
			return back;
		}
	return 0;
}
