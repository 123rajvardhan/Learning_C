#include<stdio.h>
#include<math.h>
void main()
{
	int min,max,n,i,r,sum=0,temp;
	printf("enter the min and max:");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		n=i;
		while(n!=0)
		{
			r=n%10;
			sum=sum+pow(r,3);
			n=n/10;
		}
		temp=n;
	}
	if(temp==sum)
	printf("%d is a armstrong number",sum);
	else
	printf("%d is not a armstrong number",sum);
	
	
}
