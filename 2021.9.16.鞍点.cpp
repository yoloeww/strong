  # include<stdio.h>
#  define M 3
#  define N 3
  int main(void)
  {
       bool f(int a[][M],int i,int j);
       bool g(int a[][N],int i,int j);
       int i,j,a[M][N],flag=0;
       printf("输入数据");
       for(i=0;i<M;i++)
         for(j=0;j<M;j++)
         {
           if(f(a,i,j)&&g(a,i,j))
             flag=1;
         }
       flag=0;
    if(flag)
      printf("%d%d",i,j);
    else
      printf("false");
    return 0; 
  }
 bool f(int a[][M],int i,int j)
 {
     for(int x=0;x<M;x++)
       if(a[x][j]<a[i][j])
         return flase;
   return ture;
 
 }
       bool g(int a[][N],int i,int j)
       {
        for(int x=0;x<M;x++)
       if(a[i][x]>a[i][j])
         return flase;
         return ture;
       }
