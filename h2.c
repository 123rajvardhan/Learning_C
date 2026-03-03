#include<stdio.h>
void main()
{
	int a=1,b=9,c=3;
	if(a>b && a>c)
	printf("%d is greatest",a);
	else if(b>a && b>c)
	printf("%d is greatest",b);
	else if(c>a && c>b)
	printf("%d is greatest",c);
	else
	printf("invalid input");
}
