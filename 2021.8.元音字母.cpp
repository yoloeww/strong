# include<stdio.h>
void copy(char *p1,char *p2)
{
while(*p1!='\0')
	{
        	p1++;
      if(*p1=='a'||*p1=='u'||*p1=='e'||*p1=='i'||*p1=='o'||*p1=='A'||*p1=='U'||*p1=='E'||*p1=='U'||*p1=='O')
	  {
          *p2=*p1;
     	  p2++;
	  }
	}
   *p2='\0';
}
int main(void)
{
  char p1[100],p2[100];
  printf("ÇëÊäÈë×Ö·û´®1:\n");
  gets(p1);
  puts(p1);
  copy(p1,p2);
  printf("×Ö·û´®2:%s\n",p2);
 
   return 0;

}