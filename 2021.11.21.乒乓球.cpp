# include<stdio.h>
int main(void)
{
  char a,b,c;
  for(a='x';a<='z';a++)
	  for(b='x';b<='z';b++)
          	  if(a!=b)
				  for(c='x';c<='z';c++)
					  if(c!=a&&c!=b)
						  if((a!='x')&&(c!='x')&&(c!='z'))
							 	printf("A=>%c,B->%c,C->%c\n",a,b,c);
						  return 0;
} 
