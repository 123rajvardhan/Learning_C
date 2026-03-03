#include<stdio.h>
#include<Math.h>
int power(int x ,int y)
{
	if(x==1 && y==1 )
	{
		return 1;
	}
	if(x==0)
	{
	   return 0;	 
	}
	if(y==0)
	{
	   return 1;	
	}
	else{
	
	return (pow(x,y));
}
}
void main()
{
   int a,b;
   printf("enter the number a and b");
   scanf("%d%d",&a,&b);
   int c=power(a,b);
   printf("%d",c);
}
