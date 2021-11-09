# include<stdio.h>
# include<string.h>
# include<stdlib.h>
typedef struct person
{
	char name[40];
  int score[4];
  struct person *next;
}PERSON,*PPERSON;
# define LEN  sizeof(PERSON)
PPERSON create(FILE *fpr);
int main(void)
{
   PPERSON head,pMax,pMin,p;
   FILE *fp;
   int i;
   fp=fopen("D:\\input.txt","r");
   if(fp==NULL)
	   return 1;
   head=create(fp);
   for(pMax=pMin=p=head;p!=NULL;p=p->next)
   {
	   for(p->score[3]=0,i=0;i<3;i++)
		   p->score[3]+=p->score[i];
	   if(pMax->score[3]<p->score[3])
		   pMax=p;
	   if(pMin->score[3]>p->score[3])
		   pMin=p;
   }
   for(p=head;p!=NULL;p=p->next)
   {
      printf("%s %d",p->name,p->score[3]);
	  if(pMax==p)
		  printf("Max");
	  if(pMin==p)
		  printf("Min");
	  printf("\n");
   }
   return 0;
}
PPERSON create(FILE *fpr)
{
   int i,n=0;
   char nm[30]={'O','K'};
   PPERSON p,q,hd=NULL;
   while(1)
   {
     fscanf(fpr,"%s",nm);
	 if(strcmp(nm,"quit")==0)
		 break;
	 p=(PPERSON)malloc(LEN);
	 if(n==0)
		 hd=p;
	 else
		 q->next=p;
	 n++;
	 strcpy(p->name,nm);
	 for(i=0;i<3;i++)
		 fscanf(fpr,"%d",p->score+i);
	 p->next=NULL;
		q=p;
   }
   return hd;
}