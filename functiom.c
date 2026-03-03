#include<stdio.h>
void swap(int ,int);
void main()
{
	int a=10,b=20,ans;
	printf("a=%d b=%d",a,b);
	swap(a,b);
	printf("a=%d b=%d",a,b);
}
void swap(int x,int y)
{
	int pic;
	pic=x;
	x=y;
	y=pic;
}
