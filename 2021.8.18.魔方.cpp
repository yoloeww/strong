#include <stdio.h>
#define N 100
 
int main()
{
 int a[N][N], i, j, n, m, x, y; 
 for (i = 0; i<N; i++)
 {
  for (j = 0; j<N; j++)
  {
   a[i][j] = 0;
  }
 }
 printf("Please enter the degree(n&lt;100):");//����ħ������(����)
 scanf("%d", &n);
 i = 0, j = n / 2;
 a[i][j] = 1;
 for (m = 2; m&lt;(n*n + 1); m++)
 {
  x = i;  //x��y����������һ�������±�
  y = j;
  i = (i - 1 + n) % n;
  j = (j + 1) % n;
  if (a[i][j] == 0)
  {
   a[i][j] = m;
  }
  else
  {
   a[++x][y] = m;
   i=x;
   j=y;
  }
 }
 for (i = 0; i&lt;n; i++)
 {
  for (j = 0; j&lt;n; j++)
  {
   if (j!= 0)
    putchar(' ');
   printf("%d", a[i][j]);
  }
  putchar('\n');
 }
 return 0;
}