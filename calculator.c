#include<stdio.h>
void main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+':
			printf("%d",a+b);
			break;
		case '-':
		printf("%d",a-b);
		break;
		case '*':
		printf("%d",a*b);
		break;
		case '/':
		printf("%d",a/b);
		break;
		case '%':
		printf("%d",a%b);
		break;
		default:
		printf("invalid");
		
			}
}
