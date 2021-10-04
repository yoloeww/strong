//5．有5个学生,每个学生有3门课程的成绩,
//从键盘输人学生数据(包括学号,姓名,3门课程成绩),
//计算出平均成绩,将原有数据和计算出的平均分数存放在磁盘文件 stud 中。
# include<stdio.h>
# include<stdlib.h>
# define N 2
struct student 
{
    char name[20];
	int num;
	float score[3];
	float ave;
}stu[N];
int main(void)
{
	FILE *fp;
	int i,j;
	if((fp=fopen("D:\\故事.txt","w"))==NULL)
	{
	    printf("文件打开失败");
		exit(0);
	}
  
     printf("input message:\n");
	 for(i=0;i<N;i++)
	 {
		  stu[i].ave=0;
	         scanf("%s%d",stu[i].name,&stu[i].num);
			   printf("input score:\n");
			     for(j=0;j<3;j++)
				 {
				     scanf("%f",&stu[i].score[j]);
					 stu[i].ave+=stu[i].score[j];
				 }
				  stu[i].ave=(stu[i].ave)/3.0;
	 }
	 for(i=0;i<N;i++)
	 {
          fprintf(fp,"name:%s\nnum:%d\n",stu[i].name,stu[i].num);
	      fprintf(stdout,"name:%s\nnum:%d\n",stu[i].name,stu[i].num);

     	 for(j=0;j<3;j++)
		 {
	      fprintf(fp,"score%d:%5.2f\n",j+1,stu[i].score[j]);
	      fprintf(stdout,"score%d:%5.2f\n",j+1,stu[i].score[j]);
		 }
		  fprintf(fp,"ave:%5.2f\n",stu[i].ave);
		    fprintf(stdout,"ave:%5.2f\n",stu[i].ave);
	 }
	 return 0;
}