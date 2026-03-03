#include<stdio.h>
void main()
{
	int n,a[6];
	char ch;
	printf("enter number of students:");
	scanf("%d",&n);
	printf("whether it is boy or girl:");
	scanf("%c",&ch);
	int sum,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
	 sum=sum+a[i];
		printf("%d",sum);
	}
	printf("%c",ch);
}
