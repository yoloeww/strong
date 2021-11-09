# include<stdio.h>
int min(int n,int score)
{
	return n<score ? n:score;
}
int main(void)
{
  int score;
  char grade;
  int k;
  while(1)
  {
	  scanf("%d",&score);
	  if(score<0)
		  break;
	  grade=(k=(100-min(90,score))<=40?(k-1)/10+'A':'E';
	  printf("score=%d->grade=%c\n",score,grade);
  }
  return 0;

} 