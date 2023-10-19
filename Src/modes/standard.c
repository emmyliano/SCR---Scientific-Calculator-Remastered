
#include<stdio.h>

int standard(){
    double num1;
    double num2;
    char operator;
    double result;
    
  while (1)
  {
    system("cls");
    printf("press e to exit, m to go back to mode selection\n");
    printf("\n");
    printf("Enter operator: \n");
    scanf("%c", &operator);

    printf("Enter first number: \n");
    scanf("%lf", &num1);

    printf("Enter second number: \n");
    scanf("%lf", &num2);

    switch(operator){
        case 'e' : exit(0); //exit out of the loop
        break;
        case 'm' : //return back to main (mode selection), although main hasn't been linked yet
        break;
        case '+':
        result = num1 + num2;
        printf("result: %f\n", result);
        break;
        case '-':
        result = num1 - num2;
        printf("\nresult: %f\n", result);
        break;
        case '*':
        result = num1 * num2;
        printf("\nresult: %f\n", result);
        break;
        case '/':
        result = num1 / num2;
        printf("\nresult: %f\n", result);
        break;
    }
    
  }
    return 0;
}

