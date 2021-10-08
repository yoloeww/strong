# include<stdio.h>
int main(void)
{
  int n,i,leap=1;
  printf("input number:\n");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
     if(n%i==0)
	 {
		 leap=0;
		 break;
	 }
  }
  if(leap)
   printf("yes\n");
  else
	  printf("no\n");
  return 0;
  
}