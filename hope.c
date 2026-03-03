#include<stdio.h>
void main()
{
	int p,c,m,sum;
	float per;
	printf("enter marks of p,c and m:");
	scanf("%d%d%d",&p,&c,&m);
	sum=p+c+m;
	printf("%d",sum);
	per=(sum*42/100);
	printf("%f",per);
}
