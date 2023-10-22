#include <stdio.h>
#include <stdlib.h>

int running; // This is a boolean to check if the app is running

int main()
{
    int i;
    char exit;
    if(running = 1){
        printf("\nInput E to exit the app\nPress enter to continue\n");
        printf("> ");
        scanf("%c", &exit);
    }

    if (exit == 'e' || exit == 'E') {
            return; // Exit the program if 'e' is pressed
    }

    for (i = 1; i<= 5; i++){
        // This should keep the app running till exit
        int running = 0;
        greeting();
    }

    return 0;
}

int greeting()
{
    int running = 1;
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
}