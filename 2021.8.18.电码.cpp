# include<stdio.h>
# include<string.h>
int main(void)
{
  char ch[100],i,m=0;
  printf("input text:\n");
  gets(ch);
  m=strlen(ch);
  puts(ch);
  for(i=0;i<m;i++)
  {
      if((ch[i]>='A')&&(ch[i]<='Z'))
		  ch[i]=155-ch[i];
	  else if((ch[i]>='a')&&(ch[i]<='z'))
		  ch[i]=219-ch[i];
  }
  puts(ch);
  return 0;
}