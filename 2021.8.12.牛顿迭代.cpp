# include<stdio.h>
# include<math.h>
int main(void)
{
  double x0,x1,f,f1;
  x1=1.5;
  do
  { 
	  x0=x1;
	  f=2*x0*x0*x0-4*x0*x0+3*x0-6;  //f=((2*x0-4)*x0+3)*x0-6;     
	  f1=6*x0*x0-8*x0+3;            //f1=(6*x0-8)*x0+3   
	  x1=x0-f/f1;                  // f'=f(x)/x1-x0; x1=x0-f/f'
       
  }while(fabs(x1-x0)>=1e-5);
    printf("the root of equatuion is %5.2lf\n",x1);
	return 0;
}