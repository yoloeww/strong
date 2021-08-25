# include<stdio.h>
# define M 2
# define N 100
# include<string.h>
int main(void)
{
   void input(int num[],char a[M][N]);
   void sort(int num[],char a[M][N]);
   void show(int num[],char a[M][N]);
   int find(char a[M][N],char n);
   char a[M][N];
   int num[M];
   input(num,a);
   sort(num,a);
   show(num,a);
   return 0;
}
void input(int num[],char a[M][N])
{
	int i;
	for(i=0;i<M;i++)
	{
        printf("第%d个职工号码:",i+1);
	scanf("%d",&num[i]);
	 printf("第%d个职工名字:",i+1);
		scanf("%s",a[i]);
		 putchar('\n');
	}
}
void sort(int num[],char a[M][N])
{
   int i,j,t;
   char temp[100];
   for(i=0;i<N-1;i++)
	   for(j=0;j<N-i-1;j++)
	   {
		   if(num[j]>num[j+1])
		   {
		      t=num[j+1];
			  num[j+1]=num[j];
			  num[j]=t;
			  strcpy(temp,a[j+1]);
			  strcpy(a[j+1],a[j]);
			  strcpy(a[j],temp);
		   }
	   }
}
void show(int num[],char a[M][N])
{
	int i;
for(i=0;i<M;i++)
		{
    printf("第%d个职工号码:",i+1);
	printf("%d",num[i]);
	 printf("第%d个职工名字:",i+1);
		printf("%s",a[i]);
		}

}