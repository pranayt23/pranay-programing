#include <stdio.h>
int main() {
    char o;
    double a, b;
    printf("Enter an operator (+, -, *,/,): ");
    scanf("%c", &o);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (o) 
	{
    case '+':
        printf("%.1lf + %.1lf = %.1lf", a,b,a+b);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", a,b,a-b);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", a,b,a*b);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", a,b,a/b);
        break;
    default:
        printf("Error  operator is invalid");
    }

    return 0;
}
