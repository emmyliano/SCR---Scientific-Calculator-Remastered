#include <stdio.h>
#include <stdlib.h>
int menu();

int menu()
{
    int mode;
    printf("\nSelect 1 for standard calculator, \nSelect 2 for scientific calculator mode, \nSelect 3 for binary converter mode\n");
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
        default:
            printf("Invalid Selection");
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
            return 0; // stop the program if 'e' is pressed
            }
        }

    }
    return 0;
}