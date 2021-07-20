# include<stdio.h>
# define LEN 7
void show(int a[])
{
   for(int i=0;i<LEN;i++)
	   printf("%5d",a[i]);
      putchar('\n');
}
int find1(int a[],int value)
{
   int from=0;
   int end=LEN-1;
   while(from<=end)
   {
       if(value==a[(from+end)/2])
		   return (from+end)/2;
	   else  if(value>a[(from+end)/2])
		   from=(from+end)/2+1;
	   else
		   end=(from+end)/2-1;
   }
return -1;
}
int main(void)
{
	int a[LEN]={98,87,76,73,71,24,2};
	show(a);
	if (find1(a,73)==-1)
		printf("无此数:\n");
	else
		printf(" 你要查找的数字位置为a[%d]\n",find1(a,73));
	return 0;
}

