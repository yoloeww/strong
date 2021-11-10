# include<stdio.h>
# include<string.h>
# include<malloc.h>
# include<stdlib.h>
# define M 3
typedef struct student
{
    int score;
	char name[20];
	struct student *next;
}N,*P;
P create(void)
{
     P head=(P)malloc(sizeof(N));
	 if(head==NULL)
	 {
		 printf("off");
		 exit(-1);
	 }
	 head->next=NULL;
	 return head;
}
void input(P head,char num[],int n)
{
    P last;
    last=(P)malloc(sizeof(N));
	 if(last==NULL)
	 {
		 printf("off");
		 exit(-1);
	 }
	 strcpy(last->name,num);
	 last->score=n;
	 last->next=NULL;
	 while(head->next!=NULL)
		 head=head->next;
	 head->next=last;
}
void sort(P head)
{
    P tall;
	P math;
	tall=head;
	math=tall->next;
	while(math->next)
	{
	    P a=tall;
		P b=math;
		while(b->next)
		{
	    if(b->score<b->next->score)
		{
		    a->next=b->next;
			b->next=b->next->next;
			a->next->next=b;
		}
		a=a->next;
		b=a->next;
		}
		head=head->next;
		math=head->next;
	}
}
void show(P head)
{
  while(head->next)
  {
     head=head->next;
	 printf("%s %d\n",head->name,head->score);
  }
}
int main(void)
{
   int i;
   N a[M];
   P head=create();
   printf("input message:\n");
   for(i=0;i<M;i++)
   {
     scanf("%s%d",a[i].name,&a[i].score);
	 input(head,a[i].name,a[i].score);
   }
    sort(head);
    show(head);
	 return 0;


}