# include<stdio.h>
int main(void)
{
    void bec(char *a,char *b,int m);
	char p[100],p2[100];
	int m;
	printf("input char:\n");
	gets(p);
	printf("input m:\n");
	scanf("%d",&m);
	bec(p,p2,m);
	puts(p2);
	return 0;
}
void bec(char *a,char *b,int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		a++;
	}
	while(*a!='\0')
	{
		*b=*a;
		b++;
		a++;
	}
	*b='\0';

}