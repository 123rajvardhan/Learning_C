#include<stdio.h>
#include<math.h>
void main()
{
	int n,i,sum=0,r,par;
	printf("enter n:");
	scanf("%d",&n);
	while(n!=0)
	 {
	 r=n%10;
	 sum=sum+(r*r*r);
	 n=n/10;
}
 if(n==sum)
 printf("armstrong number");
 else
 printf("not a armstrong number");
}
