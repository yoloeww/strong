#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 3
typedef struct student
{
	    char name[40];
        int score;//学生成绩 
        struct student *next;
}student;


student *input(student *stu,student stud[3]);//输入成绩 
void output(student *s);//打印成绩 


int main()

{
	 student stud[N];
     student *s,*stu;
     stu=(student *)malloc(sizeof(student ));//建表 (含有头结点） 
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
           printf("请输入第%d学生姓名和分数:\n",i+1);
		   scanf("%s",stud[i].name);
           scanf("%d",&stud[i].score); 
           q=stu;           
           p=(student *)malloc(sizeof(student));
           p->score=stud[i].score;
		   strcpy(p->name,stud[i].name);
          while(q->next!=NULL)//找到插入节点的 
           {
             if(q->next->score> p->score)
                break;
              q=q->next;  
           }
           p->next=q->next;//头插法实现从高到低 
           q->next=p;
           }
    
     
        return  stu;
}


void output(student *s)
{   student *p=s->next;
     
     while(p!=NULL)//打印成绩 
     {
     printf("%s %d \n",p->name,p->score);
     p=p->next;
     } 
}    
