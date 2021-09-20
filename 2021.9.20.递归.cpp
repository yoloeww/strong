# include<stdio.h>
int main(void)
{
  void f(char a,char b);
  void g(int i,char a,char b,char c);
  g(64,'A','B','C');
  return 0;
}
  void f(char a,char b)
  {
      printf("´Ó%cÍù%cÅ²Ò»¸öÔ²ÅÌ\n",a,b);
  }
  void g(int i,char a,char b,char c)
  {
	  if(i==2)
	  {
	     f(a,b);
		 f(a,c);
		 f(b,c);
	  }
	  else if(i>2)
	  {
	      g(i-1,a,c,b);
		  f(a,c);
		  g(i-1,b,a,c);
	  }
  }
