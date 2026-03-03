#include<stdio.h>
void main()
{
	char str[50];
	int i,j;
	printf("ebter a string:");
	scanf("%s",str);
	for(j=0;str[j]!='\0';j++);
	for(i=0,j=j-1;i<=j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			break;
		}
		if(i>j)
		printf("it is palindrome");
		else
		printf("it is not palindrome");
	}
}
