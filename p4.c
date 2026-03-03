#include<stdio.h>
void main()
{
	int n,a[6],i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("after reversing the array:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
