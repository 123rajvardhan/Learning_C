#include<stdio.h>
int ins(int a[],int);
int main()
{
	int a[10],i,inse;
	printf("enter an array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	inse=ins(a,10);
}
int ins(int a[],int n)
 {
 	int ele,pos,i,inse;
 	printf("enter insert element");
 	scanf("%d%d",&ele,&pos);
 	printf("enter n:");
 	scanf("%d",&n);
 	for(i=n-1;i>n;i--)
 	{
 		a[i+1]=a[i];
 		a[pos]=ele;
 		inse=ele;
 		printf("inserting elemnt is %d",inse);
	 }
 }
