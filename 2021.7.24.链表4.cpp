#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20];
    float math;
};
struct node
{
    struct student data;
    struct node *next;
};
struct node* create()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    head->next = NULL;
    return head;
}
//创建结点
struct node* creatt(struct student data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void insert(struct node* head, struct student data)
{
    struct node* newnode = creatt(data); //创建插入结点
    newnode->next = head->next;
    head->next = newnode;
}
void sortList(struct node* pList)
{
    if (!pList||!pList->next) return;
    node* pre = pList,*cur=pre->next;
    while (cur->next)
    {
        node *p = pre, *q = cur;
        while (q->next)
        {
            if (q->data.math > q->next->data.math)
            {
                p->next = q->next;
                q->next = q->next->next;
                p->next->next = q;
            }
            p = p->next;
            q = p->next;
        }
        pre = pre->next;
        cur = pre->next;
    }
}
void show(struct node * head)
{
    struct node* pmove = head->next;
    printf("name and math is:\n");
    while (pmove)
    {
        printf("%s %6.2f\n", pmove->data.name, pmove->data.math);
        pmove = pmove->next;
    }
    printf("\n");
}
//销毁
void destroy(struct node * head)
{
    struct node *p = head, *del = NULL;
    while (p)
    {
        del = p;
        p = p->next;
        free(del);
    }
    head = NULL;
}
int main()
{
    struct node*list = create();
    struct student info;
    for (int i = 0; i < 3; i++)
    {
        printf("请输入学生姓名和成绩:\n");
        scanf("%s%f", info.name, &info.math);
        insert(list, info);
    }
    sortList(list);
    show(list);
    destroy(list);
	return 0;
}

