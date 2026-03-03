#include<stdio.h>
void main()
{
	 int a[2][2],j,i;
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<2;i++)
	 {
	 	for(j=0;j<2;j++)
	 	{
	 		if(a[i][j]%2==0)
	 		{
	 			printf("even numbers is %d",a[i][j]);
			 }
			 else
			 printf("odd numbers is %d",a[i][j]);
		 }
	 	
	 }
}
