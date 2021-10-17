# include<stdio.h>
int main(void)
{
     int x,y;
	 printf("input x :\n");
	 scanf("%d",&x);
	 if(x<0)
		 y=-1;
	 else if(x==0)
		 y=0;
	 else
         y=1;
	 printf("y=%d\n",y);
	 return 0;

}