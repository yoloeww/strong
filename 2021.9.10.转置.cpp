# include<stdio.h>
int main(void)
{ 
	void fun(int a[][3]);
	int a[3][3];
	printf("input number:\n");
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%5d",&a[i][j]);
		fun(a);
		for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			printf("%5d",a[i][j]);
		putchar('\n');
		return 0;
}
void fun(int a[][3])
{
  int i,j;
  for(i=0;i<3;i++)
	  for(j=i+1;j<3;j++)
	  {
	     int temp=a[i][j];
		 a[i][j]=a[j][i];
		 a[j][i]=temp;
	  }
}
