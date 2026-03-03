#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,m6,total;
	float avg;
	printf("enter the marks:");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	total=m1+m2+m3+m4+m5+m6;
	avg=m1+m2+m3+m4+m5+m6/6;
	if(avg>=89)
	printf("grade A");
	else if(avg>=79 && avg<=89)
	{
		printf("grade b");
		
	}
	else if(avg>=69 && avg<=79)
	{
		printf("grade c");
	}
	else if(avg>=59 && avg<=69)
	{
		printf("grade d");
	}
	else if(avg>=39 &&avg<=59)
	{
		printf("grade e");
		
	}
	else
	{
		printf("fail");
	}
	
}
