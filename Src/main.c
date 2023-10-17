#include <stdio.h>

int main()
{
    int mode;
    printf("Select 1 for standard calculator, \nSelect 2 for scientific calculator mode, \nSelect 3 for binary converter mode");
    printf(" \n>");
    scanf("%d", &mode);
    
    switch(mode){
        case 1:
            // call standard
            printf("perfect");
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
