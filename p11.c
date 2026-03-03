#include<stdio.h>
#include<string.h>
void main()
{
	char ch[20];
	int len;
	printf("enter the string");
	gets(ch);
	len=strlen(ch);
	printf("%d",len);
}
