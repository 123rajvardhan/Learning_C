#include<stdio.h>
void mul();
void main()
{
	mul();
}
void mul()
{
	int a[4][4],b[4][4],c[4][4],i,j,k,sum=0;
	printf("enter the elements in the a:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements the b:");
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
			sum=0;
			for(k=0;k<4;k++)
			{
				sum=sum+a[i][k]+b[k][j];
				c[i][j]=sum;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",c[i][j]);
		}
	}
}
