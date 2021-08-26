# include<stdio.h>
# define N 5
int main(void)
{
   int a[N];
   printf("input ten number:\n");
   void input(int *a);
   void swan(int *a);
   void show(int *a);
   input(a);
   swan(a);
   show(a);
   return 0;
}
void input (int *a)
{
  for(int i=0;i<N;i++)
	  scanf("%d",&a[i]);
}
void swan(int *a)
{
   int temp,*max,*min,*p;
   max=a;
   min=a;
   for(p=a+1;p<a+N;p++)
   {
	   if(*p>*max)
		   max=p;
	   else if(*p<*min)
		   min=p;
	   temp=a[0];
	   a[0]=*min;
	   *min=temp;
	   if(max==a)
		  max=a;
	   temp=a[9];
	   a[9]=*max;
	   *max=temp;
   }
}
void show (int *a)
{
  for(int i=0;i<N;i++)
	  printf("%d\n",a[i]);
}