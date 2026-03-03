#include<stdio.h>
void ins();
void main()
{
	 ins();
}

void ins()
{
	int i,pos,ele,n,a[10];
	printf("enter n:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	

}
	printf("enter the element u want to insert");
	scanf("%d",&ele);
	printf("enter the position of the element u want to insert");
	scanf("%d",&pos);
	for(i=n;i>1;i--)
	{
		a[i-1]=a[i-2];
		a[pos-1]=ele;
	}
	printf("enter the elements after the inserting array:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);

	}
	
	}
