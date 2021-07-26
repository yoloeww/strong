# include<stdio.h>
# define N 5
struct student
{
  char num[6];
  char name[80];
  int score[4];
}stu[N];
int main(void)
{
    int i,j;
	for(i=0;i<N;i++)
	{
		printf("请输入第%d个学生的编号:\n",i+1);
    	scanf("%s",stu[i].num);
		printf("请输入第%d个学生的姓名:\n",i+1);
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("该学生第%d门成绩为:",j+1);
	     	scanf("%d",&stu[i].score[j]);
		}
	}
	for(i=0;i<N;i++)
	{   
		printf("编号:%s\n姓名:%s\n",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
			printf("成绩:%d\n",stu[i].score[j]);
	}
		return 0;

}