# include<stdio.h>
int main(void) 
{
      void average (float *p,int n);
	  void search(float (*p)[4],int n);
	  float score[3][4]={{1,2,3,42},{8,98,23,87},{76,23,12,55}};
	  average(*score,12);
	  search(score,2);
	  return 0;
}
void average (float *p,int n)
{
  int i;
  float sum=0,aver=0;
  for(i=0;i<n;i++)
  {
	  sum=sum+(*p);
      p++;
  }
  aver=sum/n;
  printf("aver=%5.2f\n",aver);
}
void search(float (*p)[4],int n)
{
       for(int i=0;i<4;i++)
		   printf("%5.2f\n",*(*(p+n)+i));
}
