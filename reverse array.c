#include<stdio.h>
void main()
{
	int a[10],n,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		printf("elements after reaversing the value of array\n");
		{
			for(i=n-1;i>=0;i--)
			printf("%d",a[i]);
		}
	}
}
