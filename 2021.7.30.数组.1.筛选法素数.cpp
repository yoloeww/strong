# include<stdio.h>
# include<math.h>
int main(void)
{

	  int a[101];
	  a[1]=0;
	  int i,j,m=0;
	  for(i=1;i<=100;i++)
		  a[i]=i;
	  a[1]=0;
	  for(i=2;i<sqrt(100);i++)
	  {
		  for(j=i+1;j<=100;j++)
			  if(a[i]!=0&&a[j]!=0)
			  {
				  if(a[j]%a[i]==0)
					  a[j]=0;
			  }
	  }
	  for(int k=2;k<=100;k++)
	  { 
		  if(a[k]!=0)
		  {
		  m++;
		  printf("%5d",a[k]);
     	  if(m%10==0)
		  putchar('\n');
		  }
	  }
	  putchar('\n');
	  printf("共有%d个素数\n",m);
	  return 0;
}