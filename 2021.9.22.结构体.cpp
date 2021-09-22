# include<stdio.h>
# include<stdlib.h>
# include<string.h>
struct student
{
   char name[20];
   int score;
   struct student *next;
};
struct student *create(void)
{
	struct student *head;
	head=(struct student*)malloc(sizeof(struct student));
	if(head==NULL)
	{
		printf("error");
		exit(-1);
	}
	head->next=NULL;
	return head;
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
/*struct student *sort(struct student *stu  )
{      
	    int i,a;
        struct student *p,*q;
		for(i=0;i<3;i++)
		{
           q=stu;           
           p=(student *)malloc(sizeof(student));
           p->score=a;
          while(q->next!=NULL)//找到插入节点的 
           {
             if(q->next->score < p->score)
                break;
              q=q->next;  
           }
           p->next=q->next;//头插法实现从高到低 
           q->next=p;
           }
        return  stu;
}*/
void show(struct student *head)
{
    while(head->next!=NULL)
	{
		head=head->next;
		printf("%s %3d\n",head->name,head->score);
	}
}
bool find(struct student *head,int n)
{
  struct student *p=head->next;
  while(p!=NULL)
  {
     if(p->score==n)
	 {
		return true;
	 }
	 p=p->next;
  }
  return false;
}
bool insert(struct student* head,int i,int x)
{
     struct student *p=head;
	 int count=0;
	 while(p!=NULL&&count<i-1)
	 {
	    p=p->next;
		count++;
	 }
	 if(p==NULL)
		 return false;
	 else
	 {
	     struct student *node=(struct student *)malloc(sizeof(struct student));
		 node->score=x;
		 node->next=p->next;
		 p->next=node;
		 return true;
	 }
}
int main(void)
{
    struct student a[3],*head=create();
	printf("input message:\n");
	for(int i=0;i<3;i++)
	{
        scanf("%s%d",a[i].name,&a[i].score);
		input(head,a[i].name,a[i].score);
	}
	insert(head,2,3);
    show(head);
	int m=find(head,12);
    if(m==0)
		printf("not\n");
	else
		printf("yes\n");
	return 0;
}