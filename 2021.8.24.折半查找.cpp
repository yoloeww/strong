# include<stdio.h>
int main(void)
{
        
	int found(int a[10],int m);
	int a[10]={1,2,3,4,5,6,7,8,9,20},num;
	printf("input want number:\n");
	scanf("%d",&num);
	int t=found(a,num);
	if(t==-1)
	printf("flase\n");
	else
	printf("the situation is %d\n",t);
	return 0;		
}
int found(int a[10],int m)
{
    int end=9,low=0,mid;
	while(low<=end)
	{
		mid=(end+low)/2;
	     if(m>a[mid])
			low=mid+1;
		 else if(m<a[mid])
			 end=mid-1;
		 else
			 return mid;
	}
	return -1;
}