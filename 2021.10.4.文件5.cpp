//5����5��ѧ��,ÿ��ѧ����3�ſγ̵ĳɼ�,
//�Ӽ�������ѧ������(����ѧ��,����,3�ſγ̳ɼ�),
//�����ƽ���ɼ�,��ԭ�����ݺͼ������ƽ����������ڴ����ļ� stud �С�
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
	if((fp=fopen("D:\\����.txt","w"))==NULL)
	{
	    printf("�ļ���ʧ��");
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