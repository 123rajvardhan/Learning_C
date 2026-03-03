#include<stdio.h>
int fib(int n1)
{
	if(n1==0)
	{
		return 0;
	}
	if(n1==1 || n1==2)
	{
		return 1;
	}
	return (fib(n1-1)+fib(n1-2));

}
void  main()
{ 
    int n;
    printf("enter  n");
    scanf("%d",&n);
	int k=fib(n);
	printf("%d",k);
}
