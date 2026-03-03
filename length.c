#include<stdio.h>
void main()
{
	int a,b,k;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	while(b!=0)
	{
		k=a%b;
		a=b;
		b=k;
	}
	printf("%d is length",a);
}
