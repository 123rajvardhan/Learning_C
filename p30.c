#include<stdio.h>
int max(int[],int);
int min(int[],int);
int main()
{
	int a[10],i,k,o;
	printf("enter the elements in array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	k=max(a,10);
	o=min(a,10);
	return 0;
}
int max(int a[10],int n)
{
	int k,i;
	k=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>k)
		{
			k=a[i];
			printf("%d is the max number",k);
		}
	}
	return 0;
}
int min(int a[10],int n)
{
	int o,i;
	o=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<o)
		{
			o=a[i];
			printf("%d is the min number",o);
		}
	}
	return 0;
}

