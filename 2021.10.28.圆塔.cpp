# include <stdio.h>
int main(void)
{
   int h=10;
   float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,x,y,h1,h2,h3,h4;
   printf("input x and y\n");
   scanf("%f%f",&x,&y);
   h1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    h2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	 h3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	  h4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	  if(h1>1&&h2>1&&h3>1&&h4>1)
		  h=0;
	  printf("h=%d\n",h);
      return 0;
}