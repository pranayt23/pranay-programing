//to find factorial
#include<stdio.h>
void main()
{
int i,factorial=1,num;
printf("enter the number :");
scanf("%d",num);
for(i=1;i<=num;i++);
{
factorial=factorial*i;
}
printf("factorial of %d is %d",num,factorial);
}
