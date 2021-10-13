# include<stdio.h>
int main(void)
{
   float hn,sn;
   sn=0;
   hn=100;
   for(int i=0;i<10;i++)
   {
         sn+=hn;
		 hn=hn/2;
   }
   printf("%f %f",sn,hn);
   return 0;
}