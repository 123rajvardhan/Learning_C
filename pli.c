#include<stdio.h>
void main()
{
	int n,rev=0,r,pal;
	printf("enter n:");
	scanf("%d",&n);
	pal=n;
	while(n!=0)
	{

		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
	}
	if(pal==rev)
	printf("%d is a palindrome",pal);
	else
	printf("%d is not a palindrome",pal);
}
