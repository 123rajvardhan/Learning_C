#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter n");
	scanf("%d",&n);
	sum=n*(n+1)*(2*n+1)/6;
	printf("%d\n",sum);
}
