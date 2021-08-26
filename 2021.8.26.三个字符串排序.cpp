# include<stdio.h>
# include<string.h>
int main(void)
{
	  void order(char *a,char *b);
      char p1[100],p2[100],p3[100];
	  printf("three char :\n");
		  gets(p1);
		  gets(p2);
		  gets(p3);
		  {
		  	if(strcmp(p1,p2)>0)  order(p1,p2);
					if(strcmp(p2,p3)>0) order(p2,p3);
							if(strcmp(p1,p3)>0) order(p1,p3);
		  }
		  puts(p1);
		 puts(p2);
		  puts(p3);
		  return 0;

}
 void order(char *a,char *b)
 {
        char p[100];
	    strcpy(p,a);
		strcpy(a,b);
		strcpy(b,p);
 } 