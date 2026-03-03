#include<stdio.h>
int fact(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{ 
		return num*fact(num-1);
	}
}
void main()
{
	int n,a;
	printf("ente the number");
	scanf("%d",&n);
	a=fact(n);
	printf("%d",a);		
}
