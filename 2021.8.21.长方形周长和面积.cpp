# include<stdio.h>
int tude(int n,int l)
{
  int m;
  m=n*2+l*2;
  return m;
}
int area(int n,int l)
{
	return n*l;
}
int main(void)
{
    int m,n;
	printf("�����볤���εĳ��Ϳ�:\n");
	scanf("%d%d",&m,&n);
	printf("�ܳ�=%d,���=%d",tude(m,n),area(m,n));
	putchar('\n');
	return 0;
}