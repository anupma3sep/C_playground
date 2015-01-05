#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ip="192.168.1.156";
	int i,j;
	char **a;
	a=malloc(sizeof(char *)*4);
	for(i=0;i<4;i++)
		a[i]=malloc(sizeof(char *)*4);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(*ip!='.' && *ip!='\0')
			{
				a[i][j]=*ip++;
			}
			else
			{	ip++;
				a[i][j]='\0';
				break;
			}
		}
	}
	for(i=0;i<4;i++)
		printf("%s\n",a[i]);
	for(i=0;i<4;i++)
		free(a[i]);
	free(a);
    return 0;
}
