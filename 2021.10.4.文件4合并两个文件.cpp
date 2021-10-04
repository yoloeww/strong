//4．有两个磁盘文件A和B,各存放一行字母,今要求把这两个文
//件中的信息合并(按字母顺序排列),输出到一个新文件C中去。
# include<stdio.h>
# include<stdlib.h>
int main(void)
{
	char temp,ch1,ch2,str[100];
    FILE *a,*b,*c;
		int k,i=0,n=0;
	if((a=fopen("D:\\a1.txt","r"))==NULL)
	{
		printf("无法打开文件\n");
	      exit(0);
	}
	if((b=fopen("D:\\故事.txt","r"))==NULL)
	{	
		printf("无法打开文件\n");
	      exit(0);
	}
	if((c=fopen("D:\\故事2.txt","w"))==NULL)
	{
    	printf("无法打开文件\n");
	      exit(0);
	}

for(i=0;(ch1=fgetc(a))!=-1;i++)
{
     str[i]=ch1;
	 putchar(str[i]);
}
	fclose(a);
	n=i;
 for(i=n;(ch2=fgetc(b))!=-1;i++)
 {
     str[i]=ch2;
	 putchar(str[i]);
 }
	fclose(b);
	k=i;
	for(i=0;i<k-1;i++)
	{
		for(int j=0;j<k-i-1;j++)
		{
	    if(str[j]>str[j+1])
		{
			temp=str[j+1];
			str[j+1]=str[j];
			str[j]=temp;   
		}
		}
	}
		for(i=0;i<k;i++)
		{
		     fputc(str[i],c);
			 putchar(str[i]);
		}
	fclose(c);
	return 0;
}