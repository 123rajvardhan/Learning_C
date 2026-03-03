#include<stdio.h>
void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	if(n>0)
	printf("positive number");
	else if(n<0)
	printf("negative number");
	else
	printf("zero");
}
