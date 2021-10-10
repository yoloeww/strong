# include <stdio.h>
int main(void)
{
   float x1,y1,x2,y2,x3,y3,x4,y4,x,y,h=10,h1,h2,h3,h4;
   printf("input x and y");
   scanf("%f%f",&x,&y);
   h1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    h2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
	 h3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
	  h4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
	  if(h1&&h2&&h3&&h4)
		  h=0;

}