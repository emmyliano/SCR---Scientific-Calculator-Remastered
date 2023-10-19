#include <stdio.h>

int main()
{
    greeting();
}

int greeting()
{
    int mode;
    printf("Select 1 for standard calculator, \nSelect 2 for scientific calculator mode, \nSelect 3 for binary converter mode");
    printf(" \n> ");
    scanf("%d", &mode);
    
    switch(mode){
        case 1:
            standard();
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