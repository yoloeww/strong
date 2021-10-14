# include<stdio.h>
int main(void)
{
   float hn,sn;
   hn=50;
   sn=100;
   for(int i=2;i<=10;i++)
   {
         sn+=2*hn;
		 hn=hn/2;
   }
   printf("%f %f",sn,hn);
   return 0;
}
