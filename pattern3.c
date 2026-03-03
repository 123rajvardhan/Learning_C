#include<stdio.h>
void main()
{
	int i,j,sp,n;
	printf("enter the n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(sp=1;sp<=n-i;sp++)
		{
			printf("  ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
