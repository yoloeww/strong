#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3
typedef struct student
{
	    char name[40];
        int score;//ѧ���ɼ� 
        struct student *next;
}student;


student *input(student *stu,student stud[3]);//����ɼ� 
void output(student *s);//��ӡ�ɼ� 


int main()

{
	 student stud[N];
     student *s,*stu;
     stu=(student *)malloc(sizeof(student ));//���� (����ͷ��㣩 
     stu->next=NULL;
     s=input(stu,stud);
     output(s);
     return 0;
}


student *input(student *stu,student stud[N])
{       
        student *p,*q;
		int i;
        for(i=0;i<N;i++)
        {
           printf("�������%dѧ�������ͷ���:\n",i+1);
		   scanf("%s",stud[i].name);
           scanf("%d",&stud[i].score); 
           q=stu;           
           p=(student *)malloc(sizeof(student));
           p->score=stud[i].score;
		   strcpy(p->name,stud[i].name);
          while(q->next!=NULL)//�ҵ�����ڵ�� 
           {
             if(q->next->score> p->score)
                break;
              q=q->next;  
           }
           p->next=q->next;//ͷ�巨ʵ�ִӸߵ��� 
           q->next=p;
           }
    
     
        return  stu;
}


void output(student *s)
{   student *p=s->next;
     
     while(p!=NULL)//��ӡ�ɼ� 
     {
     printf("%s %d \n",p->name,p->score);
     p=p->next;
     } 
}    
