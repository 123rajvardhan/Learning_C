#include<stdio.h>
void main()
{
	int min,max,i,j,n;
	printf("enter max and min value");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n%d*%d=%d",i,j,i*j);
		}
		printf("\n     ");
	}
}
