#include<stdio.h>
void main()
{
	int n1=0,n2=1,num,i,k;
	printf("enter the number :");
	scanf("%d",&num);
	printf("%d\t%d\t",n1,n2);  //printing 0 and 1.
	for(i=2;i<num;++i)   //loop start from 2 because 0 and 1 are printed.
	{
		k=n1+n2;
		printf("%d\t",k);
		n1=n2;
		n2=k;
	}
}
