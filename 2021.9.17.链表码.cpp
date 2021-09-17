# include<stdio.h>
# include<stdlib.h>
# include<string.h>
typedef struct Node 
{
     char num[20];
	 float score;
	 struct Node *pnext;
}N,*P;
P create (void)
{
     P pheard=(P)malloc(sizeof(N));
	 if(pheard==NULL)
	 {
		 printf("Ê§°Ü\n");
	     exit(-1);
	 }
	 pheard->pnext=NULL;
	 return pheard;
}
void input (P pheard,char name[],float n)
{
  P last=(P)malloc(sizeof(N));
  if(last==NULL)
  {
	 printf("Ê§°Ü\n");
	     exit(-1);
  }
  strcpy(last->num,name);
  last->score=n;
  last->pnext=NULL;
  while(pheard->pnext!=NULL)
	  pheard=pheard->pnext;
  pheard->pnext=last;
}
void show(P pheard)
{
     while(pheard->pnext!=NULL)
	 {
		 while(pheard->pnext!=NULL)
		 {
			 pheard=pheard->pnext;
			 printf("%5s %5.2f\n",pheard->num,pheard->score);
		 }
	 }

}
int main(void)
{
	int i;
     N a[5];
	 P pheard=create();
	 printf("input message:\n");
	 for(i=0;i<5;i++)
		 scanf("%s%f",a[i].num,&a[i].score);
	for(i=0;i<5;i++)
		 input(pheard,a[i].num,a[i].score);
	show(pheard);
	return 0;
}