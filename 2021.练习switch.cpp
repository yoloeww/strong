# include<stdio.h>
int main(void)
{
   int score,m;
   printf("input a score:\n");
   scanf("%d",&score);
   printf("you score is %d\n",score);
   m=score/10;
   switch(m)
   {
   case 0:
   case 1:
   case 2:
   case 3:
   case 4:
   case 5: printf("you grade is 'E'\n"); break;
   case 6: printf("you grade is 'D'\n"); break;
   case 7: printf("you grade is 'C'\n"); break;
   case 8: printf("you grade is 'B'\n"); break;
   case 9: printf("you grade is 'A'\n"); break;
   case 10: printf("you grade is 'A'\n"); break;
   default :printf("you grade is error\n"); break;
   }
	   return 0;

}