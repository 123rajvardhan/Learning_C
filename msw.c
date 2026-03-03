#include<stdio.h>
void main()
{
	int m,s,w;
	printf("enter m,s and w");
	scanf("%d%d%d",&m,&s,&w);
	
	if(m>s && m>w)
	{
		printf("manvi be a team leader");
	}
	else if(s>m && s>w)
	{
		printf("shyam be a team leader");
	}
	else if(w>m && w>s)
	{
		printf("william be a team leader");
	}
	else
	printf("invalid ");
}
