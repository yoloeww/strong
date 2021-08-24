# include<stdio.h>
# include<math.h>
float solut(float a,float b,float c,float d)
{
   float x=1,x0,f,f1;
   do
   {
	   x0=x;
	   f=a*x0*x0*x0+b*x0*x0+c*x0+d;
	   f1=3*a*x0*x0+2*b*x0+c;
	   x=x0-f/f1;
   }while(fabs(x-x0)>=1e-3);
	   return x;
}
int main(void)
{
   float a,b,c,d,x;
   printf("input number:\n");
   scanf("%f%f%f%f",&a,&b,&c,&d);
   x=solut(a,b,c,d);
   printf("the root is %f\n",x);
   return 0;
}