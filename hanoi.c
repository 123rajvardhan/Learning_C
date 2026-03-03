#include<stdio.h>
int th(int n,int x,int y,int z)
{
	if(n>0)
	{
		th(n-1,x,z,y);
		printf("from %d to %d\n",x,z);
		th(n-1,y,x,z);
	}
}
int main()
{
	int disc =3;
	int t1=1,t2=2,t3=3;
	th(disc,t1,t2,t3);
  }
