/*��һ����4��ѧ��,5�ſγ̡�
�����1�ſγ̵�ƽ���֩r
���ҳ����������Ͽγ̲������ѧ��,
������ǵ�ѧ�ź�ȫ���γ̳ɼ���ƽ���ɼ�;
���ҳ�ƽ���ɼ���90�����ϻ�ȫ���γ�
�ɼ���85�����ϵ�ѧ�����ֱ��3������ʵ������3��Ҫ��*/
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
	printf("��һ��ƽ����Ϊ%5.2f\n",m);
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
			   printf("�óɼ�����60��ѧ������Ϊ:");
			   printf("%s\n",stu[i].name);
		       for(j=0;j<N;j++)
			   {
				   printf("��%d�ųɼ�Ϊ:",j+1);
				   printf("%5.2f\n",stu[i].score[j]);
			   }
			   printf("ƽ���ɼ�Ϊ%5.2f\n",stu[i].ave[i]);
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
		   printf("�ɼ���90�����ϻ���ȫ���γ̶���85�����ϵ�ѧ��Ϊ��%d��\n",i+1);
		    break;
		   }
		 }
	 }
}
//��������
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