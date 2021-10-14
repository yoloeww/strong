# include<stdio.h>
int main(void)
{
  int x1=1,x2,day=9;
  while(day>0)
  {
      x2=(x1+1)*2;
	  x1=x2;
	  day--;
  }
  printf("sum=%d\n",x1);
  return 0;
}
