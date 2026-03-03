#include<stdio.h>
int main()
{
	struct stu{
		int roll;
		char name[100];
		int mark;
	};
	struct stu s[5];
	int i;
	for( i=0;i<5;i++)
	scanf("%d%s%d",&s[i].roll,&s[i].name,&s[i].mark);
	for(i=0;i<5;i++)
	printf("%d%s%d",s[i].roll,s[i].name,s[i].mark);
	return 0;
}
