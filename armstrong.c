#include<stdio.h>
#include<math.h>
void main()
{
	int n,t,temp,digit,count=0,sum=0,r;
	printf("enter n:");
	scanf("%d",&n);
	n=t;
	while(n!=0)
	{
		digit=n%10;
		count=count+1;
		n=n/10;
		
	}
	while(t!=0)
	{
		r=t%10;
		sum=sum+pow(r,3);
		t=t/10;
	}
	t=temp;
	if(temp==sum)
	printf("%d is a amstrong number:");
	else
	printf("%d is not a armstrong number:");
}
