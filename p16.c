#include<stdio.h>
main()
{
	int fact(int);
	int n,f=1;
	printf("enter n");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of a number is %d",f);
}
 int fact(int x)
 {
 	if(x==0||x==1)
 	return 1;
 	else
 	return x*fact(x-1);
 }
