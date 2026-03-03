#include<stdio.h>
void main()
{
	int n,pl,rev=0,r;
	printf("enter n:");
	scanf("%d",&n);
	pl=n;
	while(n!=0)
	{
		r=n/10;
		rev=rev*10+r;
		n=n/10;
	}
	if(pl==rev)
	{
		printf("%d is a palindrome number",pl);
	}
	else
	printf("%d is not a palindrome",pl);
}
