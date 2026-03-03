#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=5;i<=n;i--)
	{
		for(j=5;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
