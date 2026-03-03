#include<stdio.h>
#include<math.h>
void main()
{ 
	int a,b,c,r1,r2,d;
	printf("enter  a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c; 
	if(d==0)
	{
		printf("root are real and equal");
		 r1=-b/2*a; 
		 r2=-b/2*a;
		 printf("roots are %d and %d",r1,r2);
		 
	}
	else if(d>0)
	{
		printf("roots are real and distnict");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("roots are %d and %d",r1,r2);
	}
	else
	printf("roots are imaginary");
	
}
