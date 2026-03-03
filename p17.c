#include<stdio.h>
main()
{
	int gcd(int,int);
	int n1,n2,x;
	printf("enter n1 and n2");
	scanf("%d%d",&n1,&n2);
	x=gcd(n1,n2);
	printf("gcd of number is %d",x);
}
 int gcd(int n1,int n2)
 {
 	if(n2==0)
 	return 1;
 	else
 	return gcd(n2,n1%n2);
 }
