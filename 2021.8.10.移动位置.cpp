# include<stdio.h>
# define N 10
void go(int *a,int k,int index)
{
    int term,i;
	for(i=0;i<k;i++)
	{
	   term=a[index];
	   a[index]=a[index-1];
	   a[index-1]=term;
	   index--;
	}
}
int main(void)
{
  int a[N],i,m;
  for(i=0;i<N;i++)
	  scanf("%d",&a[i]);
  printf("input situation:\n");
  scanf("%d",&m);
  for(i=N-m;i<N;i++)
	  go(a,N-m,i);
  for(i=0;i<N;i++)
	  printf("%5d",a[i]);
  putchar('\n');
  return 0;
}