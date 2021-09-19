# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# define N 5
struct student
{
   char name[20];
   int score;
   struct student *next;
};
struct student* create(void)
{ 
  struct student *p;
  p=(struct student*)malloc(sizeof(struct student));
  if(p==NULL)
     {
     printf("error");
     exit(-1);
     }
   p->next=NULL;
return p;
}
void input(struct student *head,char num[20],int score)
{
          struct student *last;
         last=(struct student*)malloc(sizeof(struct student));
strcpy(last->name,num);
last->score=score;
last->next=NULL;
while(head->next!=NULL)
{
     head=head->next;
}
head->next=last;
}
void sort (struct student* head)                         //ÅÅĞò
{

	  struct student* tall=head;
	   struct student*math=tall->next;
	 
while(math->next)
{
	struct student* a=tall;
	struct student* b=math;
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
        head = head->next;
        math = head->next;
    }
}
void show(struct student *head)
{
     while(head->next!=NULL)
{
        head=head->next;
        printf("%s %d\n",head->name,head->score);
}
}
int len(struct student *head)
{
   int i=0;
   while(head->next!=NULL)
   {
	    head=head->next;
        i++;
   }
   return i;
}
int main(void)
{
 struct student a[N];
 struct student *p;
  p=create();
printf("number:\n");
  for(int i=0;i<N;i++)
{
   scanf("%s%d",a[i].name,&a[i].score);
   input(p,a[i].name,a[i].score);
}
  printf("vail is %d\n",len(p));
sort(p);
show(p);
return 0;
}