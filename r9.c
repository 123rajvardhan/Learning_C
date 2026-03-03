#include<stdio.h>
void main()
{
	int min,max,i,j,c=0;
	printf("enter min and max");
	scanf("%d%d",&min,&max);
	for(i=min;i<=max;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		printf("\n%d",i);
	}
}
