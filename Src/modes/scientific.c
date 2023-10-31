#include<stdio.h>
#include<math.h>
void square_root();
void square();
void trig();
int scientificMenu();

void /*scientific */ main()
{
    int i;
    char stop;
	for (i = 1; i<= 5; i++){ // This should keep the app running till stop

        if(i >= 2){

            scientificMenu();
            printf("Input E to return to mode selection\nPress any other key to continue\n");
            printf("> ");
            scanf("%s", &stop);
            
            if (stop == 'e' || stop == 'E') {
                // link the mode selection here
                return 0;
                // for now return 0 should exit, till we link the mode
            }
        }
    }
}


int scientificMenu(){
    int choice;
	printf("\nInput:\n");
	printf("1. Square root\n");
	printf("2. Square\n");
	printf("3. tan, cos, sin. and it's inverse\n");
    printf("> ");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1:
            square_root();
		    break;
		case 2:
            square();
		    break;
		case 3:
            trig();
		    break;
		default : 
            printf("Invalid Input");
	}
	return 0;
}

void square_root()
{
	double num, result;
	system("cls"); // the <system cls> clears the screen as soon as the square root function is called
	printf("Enter number: ");
	scanf("%lf", &num);
	result=pow(num,0.5);
	printf("The square root of %lf ", num);
	printf("is : %lf\n", result);
	puts("\n"); // puts is the same as printf lol	
}


void square()
{
	system("cls");// the <system cls> clears the screen as soon as the square function is called
	float num, result;
	printf("Enter number: ");
	scanf("%f", &num);
	result = num * num;
	printf("The square of %.0f ", num);
	printf("is : %.0f\n", result);	
	puts("\n"); //puts is the same as printf lol
}


void trig()
{
    system("cls");
    int select;
    float num, result;
    printf("1. tan\n");
    printf("2. cos\n");
    printf("3. sin\n");
    printf("4. cos inverse\n");
    printf("5. tan inverse\n");
    printf("6. sin inverse\n");
    printf("> ");
    scanf("%d", &select);

    switch(select)
    {
    case 1:
        printf("Enter number: ");
        scanf("%f", &num);
        result = tan(num);
        printf("tan of %.2f is: %.2f", num, result);
        break;

    case 2:
        printf("Enter number: ");
        scanf("%f", &num);
        result = cos(num);
        printf("cos of %.2f is: %.2f", num, result);
        break;

    case 3:
        printf("Enter number: ");
        scanf("%f", &num);
        result = sin(num);
        printf("sin of %.2f is: %.2f", num, result);
        break;

    case 4:
        printf("Enter number: ");
        scanf("%f", &num);
        result = acos(num);
        printf("cos inverse of %.2f is: %.2f", num, result);
        break;

    case 5:
        printf("Enter number: ");
        scanf("%f", &num);
        result = atan(num);
        printf("tan inverse of %.2f is: %.2f", num, result);
        break;

    case 6:
        printf("Enter number: ");
        scanf("%f", &num);
        result = asin(num);
        printf("sin inverse of %.2f is: %.2f", num, result);
        break;

    default:
        printf("Invalid input");
        break;
    }
}