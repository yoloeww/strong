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
	    for(int j=0;j<=i;j++)  //此时j++=1>0所以退出循环 j=0
	      putchar(' ');
  }
return 0;
}