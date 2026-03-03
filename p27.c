#include<math.h>
void main()
{
	int n,f=1;
	printf("enter n:");
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
		printf("factorial of a %d is %d",n,f);
	}
}
