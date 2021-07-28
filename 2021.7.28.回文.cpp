# include<stdio.h>
int main(void)
{
  int a;
  printf("input a number:\n");
  scanf("%d",&a);
  int s=0;
  for(int i=1;i<a;i*=10)
  {
     s=a%(10*i)/i+10*s;
  }
   printf(" number is :%d\n",s);
   return 0;
}