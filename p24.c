#include<stdio.h>
void main()
{
	 int n,i,sum=0,ref;
	 printf("enter n:");
	 scanf("%d",&n);
	 ref=n;
	 for(i=1;i<=n/2;i++)
	 {
	 	if(n%i==0)
	 	sum=sum+i;
	 }
	 if(ref==sum)
	 printf("it is perfect number");
	 else
	 printf("it is not a perfect number");
}
