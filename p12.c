#include<stdio.h>
void main()
{
	char ch[10];
	int len=0,i;
	printf("enter the string");
	scanf("%s",ch);
	for(i=0;ch[i]!='\0';i++)
	 len++;
	 printf("%d",len);
}
