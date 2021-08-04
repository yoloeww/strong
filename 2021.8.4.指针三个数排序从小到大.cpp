# include<stdio.h>
void sort(int *a,int *b,int *c)
{
  int t;
  if(*a>*b)
  {
      t=*b;
	  *b=*a;
	  *a=t;
  }
  if(*b>*c)
  {
       t=*c;
	  *c=*b;
	  *b=t;
  }
  if(*a>*c)
 {
       t=*c;
	  *c=*a;
	  *a=t;
  }

}
int main(void)
{
	int a,b,c;
	printf("input three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	sort(&a,&b,&c);
	printf("%5d%5d%5d\n",a,b,c);
	return 0;
}
