# include<stdio.h>
int main(void)
{
    int s=0,i,num;
	printf("input number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i=i*10)
	{
	  s=num%(10*i)/i+s*10;
	}
	printf("%d",s);
	return 0;
}