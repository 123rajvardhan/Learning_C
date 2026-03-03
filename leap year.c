#include<stdio.h>
void main()
{
	int y;
	printf("enter a year:");
	scanf("%d",&y);
	if(y%400==0 && y%4==0)
	{
		printf("%d is a leap year",y);
		
	}
	else if(y%100==0)
	{
		printf("%d is not a leap year",y);
	}
	else
	printf("not a leap year");
}
