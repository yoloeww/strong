/*有一个班4个学生,5门课程。
①求第1门课程的平均分﹔
②找出有两门以上课程不及格的学生,
输出他们的学号和全部课程成绩及平均成绩;
③找出平均成绩在90分以上或全部课程
成绩在85分以上的学生。分别编3个函数实现以上3个要求。*/
# include<stdio.h>
# include<string.h>
# define N 5
# define M 4
struct student 
{
    char name[20];
	float score[N];
	float ave[M]=0;
	int leap[M];
};
int main(void)
{
	float ave(student stu[M]);
	void find(student stu[M]);
	void find2(student stu[M]);
	struct student stu[M];
	int i,j;
	printf("input student message:\n");
	for(i=0;i<M;i++)
	{
		stu[i].ave[i]=0;
		stu[i].leap[i]=0;
		scanf("%s",stu[i].name);
	  for(j=0;j<N;j++)
		  scanf("%f",&stu[i].score[j]);
	}
	
	float m=ave(stu);
	printf("第一门平均分为%5.2f\n",m);
	find(stu);
	find2(stu);
	return 0;
}	
float ave(student stu[M])
{
    int j,i;
	float aver=0;
    for(i=0;i<M;i++)
	{
	   for(j=0;j<N;j++)
	   {
	      stu[i].ave[i]+=stu[i].score[j];
	   }
        aver+=stu[i].score[0];
		stu[i].ave[i]=stu[i].ave[i]/N;
	}
 return aver/4;
}
void find(student stu[M])
{
      int i,j;
	  for(i=0;i<M;i++)
		  for(j=0;j<N;j++)
		  {
		     if(stu[i].score[j]<60)
				 stu[i].leap[i]++;
		  }
		for(i=0;i<M;i++)
		{
		   if(stu[i].leap[i]>2)
		   {
			   printf("该成绩低于60的学生名字为:");
			   printf("%s\n",stu[i].name);
		       for(j=0;j<N;j++)
			   {
				   printf("第%d门成绩为:",j+1);
				   printf("%5.2f\n",stu[i].score[j]);
			   }
			   printf("平均成绩为%5.2f\n",stu[i].ave[i]);
		   }
		}

}
void find2(student stu[M])
{
    int i,j;
	 for(i=0;i<M;i++)
	{
		 for(j=0;j<N;j++)
		 {
	       if((stu[i].ave[i]>80)||(stu[i].score[j]>85))
		   {
		   printf("成绩在90分以上或者全部课程都在85分以上的学生为第%d名\n",i+1);
		    break;
		   }
		 }
	 }
}
//测试数据
/*mutao 70 70 70 70 70
liming 80 80 80 80 80
wanghua 98 98 98 98 98
sda 100 100 100 100 100*/
/**/
/*
mutao 50 50 50 50 23
liming 23 23 12 2 23
wanghua 98 98 98 98 98
sda 100 100 100 100 100*/