# include<stdio.h>
# include<math.h>
# define M 1000
int main(void) 
{
  int i,k;
  printf("input a number:\n");
  scanf("%d",&i);
  while(i>M)
  {
	  printf("error,again\n");
	  scanf("%d",&i);
  }
	  k=sqrt(i);
  printf("%d的平方根的整数部分为%d\n",i,k);
  return 0;
}