# include<stdio.h>
int main(void)
{

	char a,b,c;
	char i,j,k;
	for(i='X';i<='Z';i++)
	{
		a=i;
		for(j='X';j<='Z';j++)
		{
			if(i==j)
				continue;
			b=j;
			for(k='X';k<='Z';k++)
			{
				if(k==i||k==j)
					continue;
				    c=k;
					if(a!='X'&&c!='X'&&c!='Z')
						printf("A��%c�ȣ�B��%c�ȣ�C��%c�ȡ�\n",a,b,c);
			}
		}
	}
	return 0;
}