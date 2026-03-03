#include<stdio.h>
void main()
{
	 int a[10],n,i,sum=0;
	 float avg;
	 printf("enter n:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	for(i=0;i<n;i++)
	 	{
	 		sum=sum+a[i];
	 		printf("sum is %d\n",sum);
	 			avg=sum/n;
	 			printf("avg is %f\n 
				",avg);
			 }
		 
	 }
}
