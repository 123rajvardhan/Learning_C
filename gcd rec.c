#include<stdio.h>
int gcd(int num1,int num2)
{
	if(num2!=0)
	{
		return gcd(num2,num1%num2);
	}
	else
	{
		return num1;
	}
}
int main()
{
	int n1,n2;
	printf("ente the number1");
	scanf("%d",&n1);
	printf("ente the number1");
	scanf("%d",&n2);
	int a=gcd(n1,n2);
	printf("%d and %d is %d",n1,n2,a);	
	return 0;	
}
