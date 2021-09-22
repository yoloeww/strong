# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# define N 3

struct student
{
   char name[20];
   int score;
   struct student *next;
};
/*
struct student *create(struct student a[N])
{
	struct student *head;
	head=(struct student*)malloc(sizeof(struct student));
	if(head==NULL)
	{
		printf("error");
		exit(-1);
	}
	head->next=NULL;
	for(int i=0;i<N;i++)
	{
	    struct student *node=(struct student *)malloc(sizeof(struct student));
		strcpy(node->name,a[i].name);
		node->score=a[i].score;
		node->next=head->next;
		head->next=node;
	}
	return head;
}
头*/
struct student *create(struct student a[N])
{
       struct student *head;
	head=(struct student*)malloc(sizeof(struct student));
	if(head==NULL)
	{
		printf("error");
		exit(-1);
	}
	head->next=NULL;
		struct student *last=(struct student *)malloc(sizeof(struct student));
		last=head;
	for(int i=0;i<N;i++)
	{
	    struct student *node=(struct student *)malloc(sizeof(struct student));
        strcpy(node->name,a[i].name);
		node->score=a[i].score;
		last->next=node;
		last=last->next;
	}
	last->next=NULL;
	return head;
}
bool delate(struct student *head,int x)
{
	if(head->next==NULL||head==NULL) //是不是空表
		return false;
	struct student *p=head->next;
	struct student *q=head;    //找位置
    while(p!=NULL)
	{
		if(p->score==x)
		{
			q->next=p->next;
		    free(p);
			return true;
		}
	else   //没找到
	{
	   q=p;
	   p=p->next;
	}
	}
return false;
}
void sort(struct student *head)
{
	//冒泡排序
	int i, j;
	struct student *t;
	struct student *a,*b;
	for (i=0;i<N;i++)
	{
		a = head->next;
		b = a->next;
		for (j=0; j<N-i-1;j++)
		{
			if ((a->score) > (b->score))//之前根据分数排序
			{
				t=b->next;
		     	b=a;
				a=t->next;
			}
			a = b;
			b = b->next;
		}
	}
	printf("排序完成\n");
}
void show(struct student *head)
{
    while(head->next!=NULL)
	{
		head=head->next;
		printf("%s %3d\n",head->name,head->score);
	}
}

/*bool insert(struct student* head,int i,int x)
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
}*/
void fun(struct student *head)
{
	
	 struct student *q=head;
	 while(q!=NULL)
	 {
	 head=head->next;
	 free(q);
	 }
}
/*int len(struct student *head)
{
	i=0;
	head=head->next;
	while(head!=NULL)
	{
	   i++;
	   head=head->next;
	}
	return i;
}*/
int main(void)
{
    struct student a[N],*head;
	printf("input message:\n");
	for(int i=0;i<N;i++)
	{
        scanf("%s%d",a[i].name,&a[i].score);
	}
    head=create(a);
/*	insert(head,2,3); */
	delate(head,32);
	sort(head);
	show(head);
    return 0;
}
