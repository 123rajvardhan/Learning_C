#include<stdio.h>
void swap(int,int);
int main()
{
	int x,y;
	printf("enter x and y");
	scanf("%d%d",&x,&y);
	swap(x,y);
	return 0;
}
	void swap(int a,int b)
	{
		int t;
		t=a;
		a=b;
		b=t;
		printf("a contains %d",a);
		printf("b contains %d",b);
		return ;
	}
