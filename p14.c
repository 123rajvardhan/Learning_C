#include<stdio.h>
void main()
{
	char ch[10];
	int i,j,len=0,flag=0;
	printf("enter a string");
	gets(ch);
	for(i=0;ch[i]!='\0';i++);
	{
		len++;
	}
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(ch[i]!=ch[j])
		flag=1;
		break;
	}
	if(flag==1)
	printf("it is not a palindrome string");
	else
	printf("it is a palindrome string");
} 
