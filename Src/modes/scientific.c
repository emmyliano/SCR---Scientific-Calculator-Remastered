#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// void scientific();

void scientific(){
    double x, y, result;
    int i, operation;

    printf("Press 'e' to exit, 'm' to go back to mode selection ");
        printf("\n\n");
        printf("Select operation to perform: ");
        scanf(" %d", &operation);

    printf("Enter value to operate: ");
        scanf("%lf", &x);

    switch(operation)
    {
        case 1: // sqrt
            result = sqrt(x);
            printf("%lf", result);
            break;

        case 2: // inverse of x
            result = 1/x;
            printf("%lf", result);
            break;

        case 3: // power of x
            printf("Enter power: ");
            scanf("%lf", &y);
            result = pow(x, y);
            printf("%lf", result);
            break;

        // case 4: // remainder from a division
        //     printf("Enter divisor: ");
        //     scanf("%lf", &y);
        //     result = (x%y);
        //     printf("%lf", result);
        //     break;

        case 5: // square of x
            result = pow(x, 2);
            printf("%lf", result);
            break;

        case 6: // sin x
            result = sin(x * 3.14159 / 180);
            printf("%lf", result);
            break;

        case 7: // cos x
            result = cos(x * 3.14159 / 180);
            printf("%lf", result);
            break;

        case 8: // tan x
            result = tan(x * 3.14159 / 180);
            printf("%lf", result);
            break;

        case 9: // cosec x
            result = 1 / (sin(x * 3.14159 / 180));
            printf("%lf", result);
            break;

        case 10: // sec x
            result = 1 / (cos(x * 3.14159 / 180));
            printf("%lf", result);
            break;

        case 11: // cot x
            result = 1 / (tan(x * 3.14159 / 180));
            printf("%lf", result);
            break;

        case 12: // log x
            result = log(x);
            printf("%lf", result);
            break;

        case 14: // antilog x
            result = pow(10, x);
            printf("%lf", result);
            break;

        case 15: // exponent of x
            result = exp(x);
            printf("%lf", result);
            break;

        case 16: // ln x
            y = exp(x);
            result = pow(y, -1);
            printf("%lf", result);

        case 17: // factorial of x
            result = 1;
            for (i = 1; i<= x; i++)
            {
                result = result * i;
            }
            printf("%lf", result);
            break;

    }


}