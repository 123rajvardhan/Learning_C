#include<stdio.h>
void main()
{
	int n,r,rev=0,var;
	printf("enter the value of n:");
	scanf("%d",&n);
	var=n;
	while(var>0)
	{
		r=var%10;
		rev=rev*10+r;
		var=var/10;
	}
	if(n==rev)
	{
		printf("%d is a reverse number",rev);
	}
	else
	printf(" %d is not a reverse number",rev);
}
