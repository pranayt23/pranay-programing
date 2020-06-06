//simple calculator in c language by using switch case
#include <stdio.h>
int main() {
    char o;
    double a, b;
    printf("Enter an operator +, -, *,/,: ");
    scanf("%c", &o);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (o) 
	{
		    //for addition of two numbers by using '+'(pluse) operator.
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a,b,a+b);
        break;
		    //for subtraction of two numbers by using '-' (minus) operator.
    case '-':
        printf("%.1lf - %.1lf = %.1lf", a,b,a-b);
        break;
		    //for multiplication of two numbers by using '*' (asterisk) operator.
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a,b,a*b);
        break;
		    //for division of two numbers by using '/' (slash) operator.
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a,b,a/b);
        break;
		    //if user enters  other than arithmetic operators it display error.
    default:
        printf("Error!  operator is invalid");
    }

    return 0;
}
