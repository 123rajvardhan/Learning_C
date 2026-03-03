#include<stdio.h>
void main()
{
	int a[4][4],i,j,trace=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		trace=trace+a[i][i];
	printf("sum of diagonals is %d",trace);
	}
}
