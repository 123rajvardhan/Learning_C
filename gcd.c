#include<stdio.h>
int main()
{
	int a,b,r;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		r=a%b;
		a=b;
		b=a;
	}
	printf("gcd is %d",a);
	return 0;
}
