// to find Factors of a Number
#include<stdio.h>
void main()
{
    int num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("Factors of %d are :", num);

    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("%d\n", i);
    }
}
