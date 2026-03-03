#include<stdio.h>
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf("%d is divisible",n);
	}
	else
	printf("%d is not divisible",n);
}
