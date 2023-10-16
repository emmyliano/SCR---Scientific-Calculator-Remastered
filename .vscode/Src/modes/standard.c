#include <stdio.h>

int standard(){
    double num1;
    double num2;
    char operator;
    double result;

    printf("Enter operator: ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
        result = num1 + num2;
        printf("\nresult: %f", result);
        break;
        case '-':
        result = num1 - num2;
        printf("\nresult: %f", result);
        break;
        case '*':
        result = num1 * num2;
        printf("\nresult: %f", result);
        break;
        case '/':
        result = num1 / num2;
        printf("\nresult: %f", result);
        break;
    }
}
