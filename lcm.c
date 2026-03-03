#include<stdio.h>
void main()
{
	int a,b,max;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	if(max%a==0 && max%b==0)
	{
		printf("lcm of %d and %d is %d",a,b,max);
	}
}
