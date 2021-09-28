# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# define N 3
struct student
{
	char name[20];
	int score;
	struct student *next;
};
struct student *create(void)
{
     struct student *head;
	 head=(struct student *)malloc(sizeof(struct student ));
	 if(head==NULL)
	 {
		 printf("·ÖÅäÄÚ´æÊ§°Ü\n");
		 exit(-1);
	 }
	 head->next=NULL;
	 return head;
} 
void input(struct student *head,struct student stu[N])
{
	
	struct student *last=(struct student *)malloc(sizeof(struct student ));
	last=head;
	for(int i=0;i<N;i++)
	{
		struct student *node=(struct student *)malloc(sizeof(struct student));
		      node->score=stu[i].score;
			  strcpy(node->name,stu[i].name);
			last->next=node;
			last=last->next;
	}
	last->next=NULL;
}
void show(struct student *head)
{
   head=head->next; 
   while(head)
{
     printf("%5s%5d\n",head->name,head->score);
     head=head->next;
}
}
int main(void)
{
    struct student stu[N];
struct student *head;
    int i; 
    printf("input student message:\n");
   for(i=0;i<N;i++)
{
          scanf("%s%d",stu[i].name,&stu[i].score);
}
head=create();
input(head,stu);
show(head);
return 0;
}