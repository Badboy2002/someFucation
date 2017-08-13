#include <stdio.h>
int main (void)
{
	int nums[]={439,455,25,15,701,287,369,741,651,473,119,525,112,682,622,310,538,242,42,402};
	int n=0,m,min,mark,len;
	len=sizeof (nums)/4;
		while (n<len)
        {
            for (m=n+1,min=nums[n],mark=n;m<len;m++) //排序
            {
                if (min<=nums[m])
                {
                    ;
                }
                else 
                {
                    min=nums[m];
                    mark=m;
                }
            }
            nums[mark]=nums[n];
            nums[n]=min;
            n++;
        }
       	for (n=0;n<len;n++)
		   {
		   	printf ("%d,",nums[n]);
		   }
        
        return 0;
}
