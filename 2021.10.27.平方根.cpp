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
  printf("%d��ƽ��������������Ϊ%d\n",i,k);
  return 0;
}