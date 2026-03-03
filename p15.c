 #include<stdio.h>
 void main()
 {
 	char str[10];
 	int i;
 	printf("enter a string");
 	gets(str);
 	for(i=0;str[i]!='\0';i++)
 	{
 		if(str[i]>65 && str[i]<90)
 		 str[i]=str[i]+32;
 		 if(str[i]>97 && str[i]<122)
 		 str[i]=str[i]-32;
	 }
 }
