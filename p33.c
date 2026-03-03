#include<stdio.h>
void main()
{
	char ch;
	printf("enter the operator:");
	scanf("%c",&ch);
	int x,y;
	printf("enter x and y:");
	scanf("%d%d",&x,&y);
	if(ch =='+')
	{
		printf("%d",x+y);
	}
	else if(ch=='*')
	{
	
	printf("%d",x*y);
}
else
{
	printf("soory");
}
}
