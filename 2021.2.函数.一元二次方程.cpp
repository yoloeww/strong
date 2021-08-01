# include<stdio.h>
# include<math.h>
void fun(double *a,double *b,double *c,double *disc)
{   

	*disc=(*b)*(*b)-4*(*a)*(*c);
      
}
int main(void)
{
    double a,b,c,disc=0,x1,x2;
	printf("请输入一元二次方程的系数:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	fun(&a,&b,&c,&disc);
	if(disc>0)
		printf("两个解分别为x1=%5lf,x2=%5lf\n",x1=(-b+sqrt(disc))/(2*a),x2=(-b-sqrt(disc))/(2*a));
    else if(disc==0)
			printf("两个相同的解为x1=x2=%5lf\n",(-b+sqrt(disc))/(2*a));
	else
		    printf("两个共轭复根为x1=%5lf+%5lfi,x2=%5lf-%5lfi\n",-b/(2*a),sqrt(-disc)/(2*a),-b/(2*a),sqrt(-disc)/(2*a));
	return 0;
   
}