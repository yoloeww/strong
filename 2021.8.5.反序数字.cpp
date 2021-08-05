# include<stdio.h>
int main(void)
{
  int number,i,s=0;
  printf("input a number:\n");
  scanf("%d",&number);
  for(i=1;i<=number;i=i*10)
  {
      s=number%(10*i)/i+s*10;
  }
  printf("diverse  number is %d\n",s);
  return 0;
}