# include<stdio.h>
# include<math.h>
int main(void)
{
  float a,x0,x1;
  printf("input a positive number:\n");
  scanf("%f",&a);
  x0=a/2;
  x1=(x0+a/x0)/2;
  do
  { 
	  x0=x1;
	  x1=(x0+a/x0)/2;
       
  }while(fabs(x1-x0)>=1e-5);
    printf("the square root of %5.2f is %8.5f\n",a,x1);
	return 0;
}
