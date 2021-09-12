# include<stdio.h>
# define N 4
# include<string.h>
int main(void)
{
   void sort(char *p[]);
   int i;
   char *p[10],str[10][20];
   for(i=0;i<N;i++)
	   p[i]=str[i];
   printf("input ten string:\n");
   for(i=0;i<N;i++)
	   scanf("%s",p[i]);
   sort(p);
   printf("now is :\n");
   for(i=0;i<N;i++)
	   printf("%s\n",p[i]);
   return 0;
}
void sort(char *s[])
{
  int i,j;
  char *temp;
  for(i=0;i<N-1;i++)
	  for(j=0;j<N-1-i;j++)
		  if(strcmp(*(s+j),*(s+j+1))>0)
		  {
			  temp=*(s+j);
			  *(s+j)=*(s+j+1);
			  *(s+j+i)=temp;
		  }
}