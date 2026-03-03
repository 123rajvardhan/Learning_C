#include<stdio.h>
void main()
{
	char va;
	printf("enter the charcter");
	scanf("%c",&va);
	int m1,m2;
	printf("enter m1 and m2");
	scanf("%d%d",&m1,&m2);
	if(va=='+')
	{
		printf("addition is %d",m1+m2);
	}
	else if(va=='-')
	{
		printf("subtraction is %d",m1-m2);
	}
	else if(va=='*')
	{
		printf("multiplication is %d",m1*m2);
		
	}
	else if(va=='/')
	{
		printf("division is %d",m1/m2);
	}
	else if(va=='%')
	{
		printf("remainder is %d",m1%m2);
	}
	else
	printf("invalid input");
}
