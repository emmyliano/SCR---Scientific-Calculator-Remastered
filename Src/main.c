#include <stdio.h>
#include <stdlib.h>
int menu();

int menu()
{
    int mode, j, k;
    int i = 1;
    int isValid;

    for (isValid = 1; i <= 4; i++){
        
        for (j = 0; j <= 20; j++)
        {
            printf("=");
            if (j == 10)
            {
                printf("Calculator");
            }
        }

        printf("\n\n1. Standard(Add, Div, Multi, Sub)\n");
        printf("2. Scientific(tan, cos, sqr root, ... ,)\n");
        printf("3. Binary Conversion(octa, hexa, deci, ...)\n");
        printf("4. Exit\n\n");
        
        for (k = 0; k <= 24; k++)
        {
            printf("=");
            if (k == 12)
            {
                printf("2023");
            }
            
        }
        
        printf(" \n> ");
        scanf("%d", &mode);
        

        switch(mode){
            case 1:
                printf("The switching is working\n");
                break;
            case 2:
                // call scientific calculator
                break;
            case 3:
                // call binary converter
                break;
            case 4:
                return 0;
            default:
                printf("\nInvalid Selection\n");
                //continue;
        }


        if (mode == 1 || mode == 2 || mode == 3)
        {
            isValid = 0;
            break;
        }
    }
    return 0;
}

int main()
{
    int i = 0;
    char stop;

    for (i = 1; i<= 5; i++){ // This should keep the app running till stop
        menu();

        if(i >= 1){
            printf("\nInput E to exit the app\nPress any other key to continue\n");
            printf("> ");
            scanf("%s", &stop);

            if (stop == 'e' || stop == 'E') {
                printf("\n[Program Finished]");
                return 0; // stop the program if 'e' is pressed
            }
        }

    }
    return 0;
}