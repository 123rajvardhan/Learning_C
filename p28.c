#include<stdio.h>
void main()
{
	int n,a=0,b=1,c;
	printf("enter n:");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	c=a+b;
	while(c<=n);
	{
		a=b;
		b=c;
		c=a+b;
		printf("\t%d",c);
	}
}
