#include<stdio.h>
void main()
{
	int a=10,b=20,c=15;
	int max;
	max=(a>b)&&(a>c)?a:(b>c)?b:c;
	printf("greatest is %d",max);
}
