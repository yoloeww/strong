# include<stdio.h>
int main(void)
{
     int i,a[40];
	 a[0]=1;
	 a[1]=1;
	 for(i=2;i<40;i++)
	 {
	    a[i]=a[i-2]+a[i-1];
	 }
	 for(i=0;i<40;i++)
	 {
		 if(i%5==0)
			putchar('\n');
	    printf("%10d",a[i]);		
	 }
	 putchar('\n');
	 return 0;
}