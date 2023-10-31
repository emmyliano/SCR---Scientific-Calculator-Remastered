#include <stdio.h>
#include <stdlib.h>
int menu();

int menu()
{
    int mode, j, k;
    int i = 1;
    int isValid; // ascertain if the user-input is registered; 1 = false, 0 = true

    for (isValid = 1; i <= 4; i++){ // if the user enters an invalid input, this will loop the menu, till input is correct
        
        for (j = 0; j <= 20; j++) // header design
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
        
        for (k = 0; k <= 24; k++) // header design
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
                // printf("The switching is working\n");
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
            isValid = 0; // user input is valid
            break; // exit this function, if the choice was correctly chosen and finished calculation
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
        system("cls");

        if(i >= 1){ // check if the user wants to exit, or continue
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