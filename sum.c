#include<stdio.h>
#include<math.h>
int sum(int,int);
int main()
{
	int i;
     i=pow(3,4);
     printf("%d",i);
     return 0;
}
 int sum(int a,int b)
 {
 	if(b==0)
 		return 1;
 	return a*pow(a,b-1);	
 }
