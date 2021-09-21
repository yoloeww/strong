# include<stdio.h>
int main(void)
{
    int raplace(char *p);
	char a[100];
	printf("input a char:\n");
	gets(a);
	int m=raplace(a);
	if(m==0)
		printf("error\n");
	else
		printf("%s\n",a);
	return 0;
}
int raplace(char *p)
{
      int leap=0;
	  while(*p!='\0')
	  {
	      if(*p=='s'&&*(p+1)=='h'&&*(p+2)=='e')
		  {
		      *p='h';
			  *(p+1)='e';
			  *(p+2)='r';
			  leap=1;
		  }
		  p++;
	  }
	  return leap;
}