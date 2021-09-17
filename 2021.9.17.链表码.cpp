# include<stdio.h>
# include<stdlib.h>
# include<string.h>
typedef struct Node 
{
     char name[20];
	 int  score;
	 struct Node *next;
}N,*P;
P create (void)
{
     P pheard=(P)malloc(sizeof(N));
	 if(pheard==NULL)
	 {
		 printf("Ê§°Ü\n");
	     exit(-1);
	 }
	 pheard->next=NULL;
	 return pheard;
}
void input (P pheard,char num[],int  n)
{
  P last=(P)malloc(sizeof(N));
  if(last==NULL)
  {
	 printf("Ê§°Ü\n");
	     exit(-1);
  }
  strcpy(last->name,num);
  last->score=n;
  last->next=NULL;
  while(pheard->next!=NULL)
	  pheard=pheard->next;
  pheard->next=last;
}
void sort (P pheard)
{

	   P tall=pheard;
	   P math=tall->next;
	 
while(math->next)
{
	P a=tall;
	P b=math;
	while(b->next)
	{
	 if(b->score > b->next->score)
	 {
	       a->next = b->next;
                b->next = b->next->next;
                a->next->next = b;
	 }
           a = a->next;
            b = a->next;
	}
        pheard = pheard->next;
        math = pheard->next;
    }
}
void show(P pheard)
{
  
		 while(pheard->next!=NULL)
		 {
			 pheard=pheard->next;
			 printf("%5s %5.2d \n",pheard->name,pheard->score);
		 }

}
int main(void)
{
	int i;
     N a[5];
	 P pheard=create();
	 printf("input message:\n");
	 for(i=0;i<5;i++)
	 {
		 scanf("%s%d",a[i].name,&a[i].score);
		 input(pheard,a[i].name,a[i].score);
	 }
	sort(pheard);
	show(pheard);
	return 0;
}