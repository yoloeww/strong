# include<stdio.h>
# include<string.h>
# define N 100
int main(void)
{
   void sort(char str[],int n);
   char str[N];
   int n;
   printf("input char:\n");
   gets(str);
   n=strlen(str);
   sort(str,n);
   return 0;
}
 void sort(char a[],int n)
 {
      int i;
	  for(i=n;i>0;i--)
	  {
	    a[i]=a[i-1];
	  }
	  a[0]='#';
	  a[n+1]='\0';
	  puts(a);
 }
