#include<stdio.h>
int fact(int);
int main()
{
	int n,f;
	printf("enter the n");
	scanf("%d",&n);
	f=fact(n);
	printf("the factorial is %d");
	return 0;
}
 int fact(int n)
 {
 	if(n>=1)
 	{
 		return (n*fact(n-1));
	 }
	 else
	 {
	 	return 0;
	 }
 }
