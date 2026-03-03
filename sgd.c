#include<stdio.h>
void main()
{
	int a[2][2];
	int i,j;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;i++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;i++)
	{
		a[i][j]=a[j][i];
	}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;i++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
	}
	
	
}
