#include<stdio.h>
int max(int[],int);
int min(int[],int);
int main()
{
  int a[6],k,o,i;
	printf("enter an array");
	for(i=0;i<6;i++)
	{
	
		scanf("%d",&a[i]);
	}
  	k=max(a,10);
	o=min(a,10);
	return 0;
}
int max(int a[6],int n)
{
	int k,i;
	k=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
			printf("maximum number is %d",k);
		}
	}
	return 0;
}
int min(int a[6],int n)

{
	int o,i;
	o=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<o)
		{
		o=a[i];
			printf("minimum number is %d",o);
		}
	}
	return 0;
}
