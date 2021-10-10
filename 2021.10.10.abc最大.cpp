# include<stdio.h>
int main(void)
{
  int a,b,c,max;
  printf("input three number:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
	  max=a;
  else
	  max=b;
  if(max<c)
	  max=c;
  else
	  ;
  printf("max=%d\n",max);
  return 0;
}