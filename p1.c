#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,r1,r2,d;
	printf("enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("roots are real and equal");
		r1=-b/2*a;
		r2=-b/2*a;
		printf("%d and %d are real and equal roots",r1,r2);
	}
	else if(d>0)
	{
		printf("roots are real and distnict");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		prinf("%d and %d are real and distinict ",r1,r2);
	}
	else
	printf("roots are imaginary");
}
