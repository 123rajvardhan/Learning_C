#include<stdio.h>
void main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<9;i++)
	{
		if(n%2==0)
		{ 
		  printf("even");
			if(n==1)
			{
			printf("one");	
			}
			else if(n==2)
			{
				printf("two");
			}
			else if(n==3)
			{
				printf("three");
			}
			else if(n==4)
			{
				printf("four");
			}
			else if(n==5)
			{
				printf("five");
			}
			else
			printf("odd");
		}
	}
}
