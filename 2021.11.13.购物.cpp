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
	FILE *p=fopen("D:\\古诗.txt","r");
	if(p==NULL)
	{
	    printf("打开失败:\n");
		exit(-1);
	}
		fscanf(p,"%d",&n);               
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<12;j++)
		{
		fscanf(p,"%lf",&stu[i].price[j]);            //读取p中的信息，fscanf不要带格式，输入到数组中
		}
	}
	printf("%d\n",n);
		for(i=0;i<n;i++)
		{
		for(j=0;j<12;j++)
		{
		printf("%-7.0lf",stu[i].price[j]);  //-为左对齐
		}
		putchar('\n');
		}
	
for(i=0;i<n;i++)
{
	stu[i].flag=1;                //这一步十分关键，结构体赋初值
		for(j=0;j<12;j++)
		{
			for(k=j+1;k<12;k++)         //遍历比较
			{
			if(stu[i].price[j]==stu[i].price[k])
				stu[i].flag=0;
			}	
		}
}

	  	for(i=0;i<n;i++)
		     for(j=0;j<12;j++)
		         	if(	stu[i].flag==1)
			        	stu[i].price[j]=stu[i].price[j]*0.5;    //每一次分别乘0.5	
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
