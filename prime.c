//TO CHECK WHETHER THE GIVEN NUMBER IS PRIME OR NOT.
#include<stdio.h>
void main()
{
	int n,j,count=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(j=2;j<=n/2;j++)
	{  
		if(n%j==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	{
		printf("given number is a prime ");
	}
	else
	{
		printf("given number is not a prime");
	}
}
