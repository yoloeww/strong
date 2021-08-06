# include<stdio.h>
int main(void)
{
  int i,j,m=0;
  for(i=100;i<=200;i++)
  {
	  for(j=2;j<200;j++)
	  {
	     if(i%j==0)
			 break;
	  }
	  if(i==j)
		 {
			 printf("%5d\n",i);
			 m++;
		 }
  }
printf("共有%d个素数\n",m);
return 0;
}