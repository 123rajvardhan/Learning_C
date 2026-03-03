#include<stdio.h>
void main()
{
	int a=0;
	++a;
	printf("%d\n",a);
	   {
	   	int a=10;
	   	++a;
	   	printf("%d\n",a);
	   }
	   ++a;
	   printf("%d",a);
}
