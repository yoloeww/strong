# include<stdio.h>
# define N 10
int main(void)
{
	int a[N]={1,4,21,41,44,65,232,234,555,2123};
	int i,temp1,temp2,j,number;
	printf("input number:\n");
	scanf("%d",&number);
	if(number>a[9])
		a[10]=number;
	for(i=0;i<8;i++)
	{
		if(number<a[i])
		{
			temp1=a[i];
		    a[i]=number;
			for(j=i+1;j<9;j++)
			{
			    temp2=a[j];
				a[j]=temp1;
				temp1=temp2;
			}
			break;
		}
	}
	for(i=0;i<10;i++)
		printf("%5d",a[i]);
	return 0;
}