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
		printf("�������%d��ѧ���ı��:\n",i+1);
    	scanf("%s",stu[i].num);
		printf("�������%d��ѧ��������:\n",i+1);
		scanf("%s",stu[i].name);
		for(j=0;j<3;j++)
		{
			printf("��ѧ����%d�ųɼ�Ϊ:",j+1);
	     	scanf("%d",&stu[i].score[j]);
		}
	}
	for(i=0;i<N;i++)
	{   
		printf("���:%s\n����:%s\n",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
			printf("�ɼ�:%d\n",stu[i].score[j]);
	}
		return 0;

}