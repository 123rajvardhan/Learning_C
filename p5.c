#include<stdio.h>
void main()
{
	int n,i,a[10],big,small;
	
	printf("enter the array elements");
	for(i=0;i<10;i++)
{

		scanf("%d",&a[i]);
	}
	big=a[0];
	small=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>big)
		  big=a[i];
		  if(a[i]<small)
		  small=a[i];
	}
	printf("biggest number is %d",big);
	printf("smallest number is %d",small);
}
