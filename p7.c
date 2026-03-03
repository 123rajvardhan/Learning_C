#include<stdio.h>
void main()
{
	int a[4][4],b[4][4],c[4][4],k,i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				c[i][j]=0;
				c[i][j]=c[i][j]+a[i][k]+b[k][j];
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",c[i][j]);
		}
	
	
	
		printf("\n");
	}
}
