#include<stdio.h>
int main(void)
{
	char c='A';
	int ch;
	scanf("%d",&ch);
	int i=0,spc=0,j=0,k=0,x=0;

	for(i=0;i<ch;i++)
	{
		c='A';
		for(j=0;j<(ch-i);j++)
		{
			printf("%c",c);
			c++;
		}

		if(i!=0)
			for(spc=2*i-1;spc>0;spc--)
			{
				printf(" ");
			}
		if(i==0)
		{
			c-=2;
			for(x=0;x<(ch-1);x++)
			{
				printf("%c",c);
				c--;
			}
		}
		else
		{
			c-=1;
			for(x=0;x<(ch-i);x++)
			{
			printf("%c",c);
			c--;
			}
		}
		printf("\n");
	}
	return 0;
}

