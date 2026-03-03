#include<stdio.h>
void fib(int,int,int);
int main()
{
	int n,c;
	printf("how many");
	scanf("%d",&n);
	fib(-1,1,n);
	return 0;
	
}
 void fib(int a,int b,int c)
 {
 	int c;
 	if(n>0)
 	{
 		c=a+b;
 		printf("%d",c);
 		fib(b,c,n,-1);
 		
	 }
 }
