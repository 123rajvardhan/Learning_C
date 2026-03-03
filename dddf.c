#include<stdio.h>
#include<math.h>
void prime(int);
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	prime(n);
	return 0;
}
 void prime(n)
 {
 	int i,c=0;
 	for(i=1;i<=n;i++)
	
		if(n%i==0)
		c+=1;
	}
	if(c==2)
	printf("prime");
	else
	{
		printf("not a prime");
	}
	return 0;
 }
