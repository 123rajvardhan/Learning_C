#include<stdio.h>
void main()
{
	int min,max,n,i,c=0,j=1;
	printf("enter min and max:");
	scanf("%d%d",&n);
	for(i=min;i<=max;i++)
	{
		n=i;
		while(n>0)
		{
			if(n%j==0)
			c++;
			j++;
			
		}
		if(c==2)
		printf("prime number");
		else
		printf("not a prime");  
	}
}
