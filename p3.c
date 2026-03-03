#include<stdio.h>
void main()
{
	int n,a[10],i,sum=0;
	float avg;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	
		sum=sum+a[i];
		printf("sum is %d",sum);
	
	avg=sum/n;
	printf("avg is %f",avg);
}
