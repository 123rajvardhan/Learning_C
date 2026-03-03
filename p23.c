#include<stdio.h>
void main()
{
	int r,n,i,sum=0,strong,fact;
	printf("enter n:");
	scanf("%d",&n);
	strong=n;
	while(n>0)
	{
	
		r=n%10;
		fact=1;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
			sum=sum+fact;
			n=n/10;
		}
}
	if(strong==sum)
	{
		printf("it is a strong number");
	}
	else
	printf("it is not a strong number");
}
