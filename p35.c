#include<stdio.h>
void main()
{
	int i,j,sum,sum1,x,n,n1;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter the elements u want:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&i);
	}
	sum=i*(i+1)/2;
	printf("%d\n",sum);
	printf("enter the elements:");
	for(j=1;j<n;j++)
	{
		scanf("%d",&j);
	}
	sum1=j*(j+1)/2;
	printf("%d\n",sum1);
	x=sum-sum1;
	printf("%d",x);	
}
