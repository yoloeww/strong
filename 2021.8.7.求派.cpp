# include<stdio.h>
# include<math.h>
int main(void)
{
  float pi=1,i=1,term=0;
  int sign=1;
  while(pi>=1e-6)
  {
        i=i+2;
		sign=-sign;
		term=sign/i;
		pi=pi+term;
  }
  pi=pi*4;
  printf("%12.6lf",pi);
  return 0;


}