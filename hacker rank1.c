#include<stdio.h>
void main()
{
	char c;
	char ch[30];
	char s[100];
    scanf("%c",&c);
	scanf("%s",ch);
    scanf("%[^\n]%*c", &s);	
	printf("%c\n",c);
	printf("%s\n",ch);
	printf("%s",s);
}
