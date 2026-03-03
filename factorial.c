#include<stdio.h>
void main()
{
	int n,f=1,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of a number is %d",f);
}
