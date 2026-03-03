#include<stdio.h>
void main()
{
	int a,n,f,i,r,sum=0;
	printf("enter a no");
	scanf("%d",&a);
	n=a;
	while(n>0)
	{
		f=1;i=2;
		r=n%10;
		while(i<=r)
		{
			f=f*i;
			i++;
		}
		sum=sum+f;
		n=n/10;
	}
	if(a==sum)
	printf("%d is a strong number",a);
	else
	printf("%d is not a strong number",a);
	
}
