# include<stdio.h>
int *p(int (*p)[4],int n); //定义一个返回指针的函数   
int main(void)
{
    int a[3][4],i,j,m,*s;
    printf("input message:\n");
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);	
	printf("input m:\n");
	scanf("%d",&m);
	s=p(a,m);
    for(i=0;i<4;i++)
	{
		printf("%d",*(s+i)); //输出这一行每个元素的值
	}
	return 0;
}
int *p(int (*a)[4],int n)
{
	int *k;
    k=*(a+n);               //返回列指针 加*变为列指针
	return k;
}
