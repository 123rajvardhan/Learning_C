#include<stdio.h>
void main()
{
	int a=15,b=1000;
	a=a*b;
	b=a/b;
	a=a/b;
	printf("after swaping a is %d,b is %d",a,b);
}
