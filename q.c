#include<stdio.h>
void main()
{
	int a=2,b=3,c=8;
	int max;
	max=a>b?a:c>b?b:c;
	printf("%d",max);
}
