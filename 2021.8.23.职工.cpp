# include<stdio.h>
void name(char a[][50],int n)
{
	    int i,j;
        for(i=0;i<n;i++)
		for(j=0;j<2;j++)
		scanf("%s%s",&a[i][j]);
}
void sort(char a[][50],int n)
{
	char b[][50];
	int i,j;
   for(i=0;i<n-1;i++)
	   for(j=1;j<n-i-1;j++)
		   if(a[i]>a[j])
		   {
		       b=a[j];
			   a[j]=a[i];
			   a[i]=b;
		   }
}
int main(void)
{
   char a[100][50];
   int n,i,j;
   printf("input nunber:\n");
   scanf("%d",&n);
   name(a,n);
   sort(a,n);
    for(i=0;i<n;i++)
		for(j=0;j<2;j++)
		printf("%s%s",a[i][j]);
		return 0;
}