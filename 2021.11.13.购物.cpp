# include<stdio.h>
# include<stdlib.h>
# include<malloc.h>
struct shop                 
{
	int flag;
	double price[12];
    double sum;

}stu[100];             
int main(void)
{
	int i,j,k,n;
	double sum=0;;
	FILE *p=fopen("D:\\��ʫ.txt","r");
	if(p==NULL)
	{
	    printf("��ʧ��:\n");
		exit(-1);
	}
		fscanf(p,"%d",&n);               
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<12;j++)
		{
		fscanf(p,"%lf",&stu[i].price[j]);            //��ȡp�е���Ϣ��fscanf��Ҫ����ʽ�����뵽������
		}
	}
	printf("%d\n",n);
		for(i=0;i<n;i++)
		{
		for(j=0;j<12;j++)
		{
		printf("%-7.0lf",stu[i].price[j]);  //-Ϊ�����
		}
		putchar('\n');
		}
	
for(i=0;i<n;i++)
{
	stu[i].flag=1;                //��һ��ʮ�ֹؼ����ṹ�帳��ֵ
		for(j=0;j<12;j++)
		{
			for(k=j+1;k<12;k++)         //�����Ƚ�
			{
			if(stu[i].price[j]==stu[i].price[k])
				stu[i].flag=0;
			}	
		}
}

	  	for(i=0;i<n;i++)
		     for(j=0;j<12;j++)
		         	if(	stu[i].flag==1)
			        	stu[i].price[j]=stu[i].price[j]*0.5;    //ÿһ�ηֱ��0.5	
			for(i=0;i<n;i++)
			{
		        for(j=0;j<12;j++)
				stu[i].sum+=stu[i].price[j];
	           	sum+=stu[i].sum;
			}
            for(i=0;i<n;i++)
            printf("%-7.0lf\n",stu[i].sum);
         	printf("%-7.0lf\n",sum);
        	return 0;
}
