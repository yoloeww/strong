# include <stdio.h>
void printf_star()
{ 
printf("*******\n");
}
int main(void)
{
  
  for(int i=0;i<5;i++)
  {
	  printf_star();
	    for(int j=0;j<=i;j++)  //��ʱj++=1>0�����˳�ѭ�� j=0
	      putchar(' ');
  }
return 0;
}