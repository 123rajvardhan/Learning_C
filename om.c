#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==1)
		{
			printf("one\n");
		}
		else if(n==2)
		{
			printf("two\n");
		}
		else if(n==3)
		{
			printf("three\n");
		}
		else if(n==4)
		{
			printf("four");
		}
		else if(n==5)
		{
			printf("five");
		}
		else if(n==6)
		{
			printf("six");
		}
		else if(n==7)
		{
			printf("seven");
		}
		else if(n==8)
		{
			printf("eight");
		}
		else if(n==9)
		{
			printf("nine");
		}
		else if(n>9)
		{
			if(n%2==0)
			{
				printf("even");
			}
			else
			printf("odd");
		}
		
	}
}
