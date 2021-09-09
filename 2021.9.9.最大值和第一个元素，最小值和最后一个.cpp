# include<stdio.h>
int main(void)
{
   void input(int a[],int n);
   void relp(int a[]);
   void print(int a[]);
   int a[20];
   input(a,10);
   relp(a);
   print(a);
   return 0;
}
void input(int a[],int n)
{
    int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void relp(int a[])
{
  int *p,*max,*min,temp;
  max=min=a;
  for(p=a+1;p<a+10;p++)
  {
	  if(*p>*min)
		  min=p;
  }
	  temp=a[0];
	  a[0]=*min;
	  *min=temp;
	   for(p=a+1;p<a+10;p++)
  {
	  if(*p<*max)
		  max=p;
  }
	   temp=a[9];
	   a[9]=*max;
	   *max=temp;
}
void print(int a[])
{
  int i;
  for(i=0;i<10;i++)
	  printf("%d",a[i]);
}