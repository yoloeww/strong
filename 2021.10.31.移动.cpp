# include<stdio.h>
void fun(int *a,int k,int index)
{
	int t,i;
   for(i=0;i<k;i++)
   {
      t=a[index];
	  a[index]=a[index-1];
	  a[index-1]=t;
	  index--;
   }
}
int main(void)
{
     int a[100],m,n,i;
	 printf("input n:\n");
	 scanf("%d",&n);
	 	 for(i=0;i<n;i++)
			 scanf("%d",&a[i]);
	 printf("input move:\n");
	 scanf("%d",&m);
	 for(i=n-m;i<n;i++)
		 fun(a,n-m,i);
	 for(i=0;i<n;i++)
		 printf("%5d",a[i]);
	 return 0;
}