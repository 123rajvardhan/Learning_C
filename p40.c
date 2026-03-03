#include<stdio.h>
void main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			for(j=1;j<n;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
		
	}
	
}
