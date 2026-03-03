#include<stdio.h>
void sum();
void sub();
void mul();
void div();
void main()
{
	sum();
	sub();
	mul();
	div();	
}
void sum()
{
	int a=10,b=5;
	printf("%d\n",a+b);
}
void sub()
{
	int a=10,b=5;
	printf("%d\n",a-b);
}
void mul()
{
	int a=10,b=5;
	printf("%d\n",a*b);
}
void div()
{
	int a=10,b=5;
	printf("%d\n",a/b);
}

