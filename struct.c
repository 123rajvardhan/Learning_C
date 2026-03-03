#include<stdio.h>
void main()
{
	struct student
	{
		int rollno;
		char name[10];
		int age;
	}s;
	printf("enter the roll number name and age:");
	scanf("%d%s%d",&s.rollno,s.name,&s.age);
	printf("rollno\tname\tage");
	printf("\n%d\t%s\t%d",s.rollno,s.name,s.age);
}
