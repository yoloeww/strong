# include<stdio.h>
# define M 3
# define N 2
void input(float score[][N])
{
   int i,j;
   for(i=0;i<M;i++)
   {
	   printf("input NO.%d.score:\n",i+1);
        for(j=0;j<N;j++)
			scanf("%f",&score[i][j]);
   }
}
void aver(float score[][N],float ave[M])
{
	float s[5]={0};
	int i,j;
   for(i=0;i<M;i++)
   {
	   for(j=0;j<N;j++)
		   s[i]+=score[i][j];
	       ave[i]=s[i]/float(N);
   }
}
void aver2(float score[][N],float room[M])
{
    float p[5]={0};
	int i;
	int k=0;
	for(k=0;k<N;k++)
	{ 
		for(i=0;i<M;i++)
		{
	     p[k]+=score[i][k];
		}
		 room[k]=p[k]/float(N);
	}

}
void high(float score[][N],float *max,int *a,int *b)
{
	int i,j;
   for(i=0;i<M;i++)
	   for(j=0;j<N;j++)
		   if(*max<score[i][j])
		   {
		          *max=score[i][j];
				  *a=i+1;
				  *b=j+1;
		   }
}
int main(void)
{
    float score[M][N],max,ave[M]={0},room[N]={0};
	int i,a,b;
	input(score);
	aver(score,ave);
	for(i=0;i<M;i++)
	printf("第%d个学生的平均成绩为%f\n",i+1,ave[i]);
	aver2(score,room);
	for(i=0;i<N;i++)
	printf("第%d门课的平均成绩为%f\n",i+1,room[i]);
	high(score,&max,&a,&b);
	printf("the highest student socre is %f 第%d个学生 的第%d门课\n",max,a,b);
    return 0;
}