# include<stdio.h>
# include<string.h>
int main(void)
{
  char a[80];
  int i;
  printf("input a char :\n");
  gets(a);
  puts(a);
  for(i=strlen(a);i>0;i--)
  {
    a[2*i]=a[i];
	a[2*i-1]=' ';
  }
  printf("the new char is:\n");
  puts(a);
  return 0;
}