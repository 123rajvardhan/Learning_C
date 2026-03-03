#include<stdio.h>
void main()
{
	int y;
	printf("enter the year");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("it is a leap year");
	}
	else
	printf("not a leap year");
}
