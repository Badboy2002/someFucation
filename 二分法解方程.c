//名词小写标记 区间:section 精度precision  幂函数power function 方程 equation 
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h> 
double count (char st[][10],double x); // 用途：计算幂 参数:st[]为已拆分好的字符串数组 形如2^x, x为幂中的值 返回值:表达式的值 
int main (void)
{
	int mark=0,i=0,j=0,k=1,n;  //数组下标 mark:读取方程 i: part[i][]1维表达式标记-i号表达式  j:part[i][j]2维字符标记-i号表达式中第j个字符  k:符号标记下标  n:总加减时的下标 
 	int symbol[10]={0}; //0为正 1为负 作为反号标识   
	int difference; //difference为地址差值 用于处理字符串 
	char equation[100]; //接受用户输入
	char part[10][10],temp[10];  //part:拆分后的表达式  temp字符串转数值中转值 
	char * adr,* ptp; //地址处理 
	double vaule[10]={0,0},result1=0,result2=0;   //存储结果
	double sectionA,sectionB,sectionC,precision; 
	
   //测试阶段定义 
	sectionA=-100;
	sectionB=100;
	precision=0.01;
	
	printf ("请输入方程:");
	scanf ("%s",&equation);
	fflush (stdin);
	printf ("请输入区间A:");
	scanf ("%lf",&sectionA);
	fflush (stdin);
	printf ("请输入区间B:");
	scanf ("%lf",&sectionB);
	fflush (stdin);
	printf ("请输入精度:");
 	scanf ("%lf",&precision);
		
	//对字符串进行拆分,以+,-为分隔符 
	while (equation[mark]!='=')
	{
		if (equation[mark]!='-'&&equation[mark]!='+') //如果字符不为+且不为- 就将它存入part表达式中  二维字符标记后移以便读取下一个字符 
			{
				part[i][j]=equation[mark];
				j++;
			}
		else if (equation[mark]=='-')
		{
			part[i][j]='\0';  //如果是,记下符号 一维表达式标记后移 二维字符标记重置 符号标记后移 
		 	symbol[k]=1;
			k++;
			i++;
			j=0;
		}
		else if (equation[mark]=='+')
		{
			part[i][j]='\0';  //如果是,记下符号 一维表达式标记后移 二维字符标记重置 符号标记后移 
		 	symbol[k]=0;
			k++;
			i++;
			j=0;
		}
		
		mark++;  //字符串标记后移 
	}
	part[i][j]='\0';
	printf ("字符串拆分结束\n");
	printf ("方程被识别为:");
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
	
	for (n=0;n<=i;n++) //计算取值为A时 方程的值 
	{
		if ( strrchr (part[n],'^') ) //幂标记检测，(如果有^)，传入count ()函数 
			{
				vaule[n]=count (part[n],sectionA);
				if (symbol[n]==1)  //反号 
					vaule[n]=-vaule[n];
				result1=result1+vaule[n];
				continue;
			}
			
		else if  (strrchr (part[n],'x')==NULL) //常数项检测 (没有x即为常数项),直接赋值 
			{
				vaule[n]=atof (part[n]);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
				result1=result1+vaule[n];
				continue;
			}
		else if (strrchr (part[n],'x') &&strrchr (part[n],'^')==NULL) //系数项检测 (有x且没有^) 记下系数 乘以section 
		{
			adr=strrchr (part[n],'x'); //记下x位置
			ptp=part[n];  //记下起始地址
			strncpy (temp,part[n],adr-ptp);  //截取字符串 
			vaule[n]=atof (temp);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
			vaule[n]=vaule[n]*sectionA; //计算 
			result1=result1+vaule[n];
		}
	}
	printf ("result1=%lf\n",result1);
	for (n=0;n<=i;n++) //计算取值为C时 方程的值 
	{
		if ( strrchr (part[n],'^') ) //幂标记检测，(如果有^)，传入count ()函数 
			{
				vaule[n]=count (part[n],sectionC);
				if (symbol[n]==1)  //反号 
					vaule[n]=-vaule[n];
				result2=result2+vaule[n];
				continue;
			}
			
		else if  (strrchr (part[n],'x')==NULL) //常数项检测 (没有x即为常数项),直接赋值 
			{
				vaule[n]=atof (part[n]);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
				result2=result2+vaule[n];
				continue;
			}
		else if (strrchr (part[n],'x') &&strrchr (part[n],'^')==NULL) //系数项检测 (有x且没有^) 记下系数 乘以section 
		{
			adr=strrchr (part[n],'x'); //记下x位置
			ptp=part[n];  //记下起始地址
			strncpy (temp,part[n],adr-ptp);  //截取字符串 
			vaule[n]=atof (temp);
				if (symbol[n]==1)
					vaule[n]=-vaule[n];
			vaule[n]=vaule[n]*sectionC; //计算 
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
	printf ("方程的解为:%lf\n",sectionC);
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
