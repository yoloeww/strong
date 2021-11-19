# include<stdio.h>
int main(void)
{
   void fun(int *a,int k,int index);
   int n,a[100],i,m;
   printf("input n:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
	   scanf("%d",&a[i]);
   printf("input move:\n");
   scanf("%d",&m);
   for(i=n-m;i<n;i++)
   {
      fun(a,n-m,i);
   }
 for(i=0;i<n;i++)
	   printf("%5d",a[i]);
 return 0;
}
void fun(int *a,int k,int index)
{
  int temp,i;
  for(i=0;i<k;i++)
  {
      temp=a[index];
	  a[index]=a[index-1];
	  a[index-1]=temp;
	  index--;
  }
} 