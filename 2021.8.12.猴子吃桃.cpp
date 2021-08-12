# include<stdio.h>
int main(void)
{
    int day=9,x1=1,x2;
	while(day>0)
	{
	   x2=(1+x1)*2;
	   x1=x2;
	   day--;       //   4 1
	}
	printf("total peach=%d\n",x1);
	return 0;
}
