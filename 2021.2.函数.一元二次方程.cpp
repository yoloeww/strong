# include<stdio.h>
# include<math.h>
void fun(double *a,double *b,double *c,double *disc)
{   

	*disc=(*b)*(*b)-4*(*a)*(*c);
      
}
int main(void)
{
    double a,b,c,disc=0,x1,x2;
	printf("������һԪ���η��̵�ϵ��:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	fun(&a,&b,&c,&disc);
	if(disc>0)
		printf("������ֱ�Ϊx1=%5lf,x2=%5lf\n",x1=(-b+sqrt(disc))/(2*a),x2=(-b-sqrt(disc))/(2*a));
    else if(disc==0)
			printf("������ͬ�Ľ�Ϊx1=x2=%5lf\n",(-b+sqrt(disc))/(2*a));
	else
		    printf("���������Ϊx1=%5lf+%5lfi,x2=%5lf-%5lfi\n",-b/(2*a),sqrt(-disc)/(2*a),-b/(2*a),sqrt(-disc)/(2*a));
	return 0;
   
}