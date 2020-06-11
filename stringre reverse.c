//reversing the string without using strrev()
#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,l;
	char str[50],rev[50];
	printf("enter the string :");
	gets(str);
	l=strlen(str);
	for(i=l-1;i>=0;i--)
	{
		rev[j++]=str[i];
	}
	rev[j]='\0';
	printf("reverse of string is : %s",rev);
}
