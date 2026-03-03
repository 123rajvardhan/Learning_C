#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,m6,total;
	float avg;
	printf("enter marks");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	total=m1+m2+m3+m4+m5+m6; 
	printf("total marks is %d",total);
	avg=total/6;
	printf("average is %f",avg);
}
