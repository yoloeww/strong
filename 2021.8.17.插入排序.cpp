# include<stdio.h>
int main(void)
{
	int a[5]={4,7,2,5,1},i,j,m;
	for(i=1;i<5;i++)
	{
	   m=a[i];
	   j=i-1;
	   while(j>=0&&m>a[j])
	   {
	       a[j+1]=a[j];
		   j--;
	   }
		   a[j+1]=m;
	}
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	return 0;
}