#include<stdio.h>
#include<math.h>
void square_root();
void square();
void trig();
int sciMenu();

int /*scientific */ main()
{
    int i, stop;
	for (i = 1; i<= 5; i++){ // This should keep the app running till stop
        sciMenu();

        if(i > 1){
            printf("\nInput E to exit\nPress any other key to continue\n");
            printf("> ");
            scanf("%s", &stop);

            if (stop == 'e' || stop == 'E') {
                return 0; // stop the program if 'e' is pressed
            }
        }
    }
}

int sciMenu(){
    int choice;
	printf("Select the corresponding numbers :\n");
	printf("1. square root\n");
	printf("2. square\n");
	printf("3. tan, cos, sin. and it's inverse\n");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
            square_root() ;
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

void square_root (	)
{
	int result;
	float num;
	system("cls"); // the <system cls> clears the screen as soon as the square root function is called
	printf("enter a number: ");
	scanf("%f", &num);
	result=pow(num,0.5);
	printf("the square root of %.0f ", num);
	printf("is : %d\n", result);
	puts("\n"); // puts is the same as printf lol
	main (	);
	
}

void square( )
{
	system("cls");// the <system cls> clears the screen as soon as the square function is called
	float num, result;
	printf("enter a number: ");
	scanf("%f", &num);
	result=num*num;
	printf("the square of %.0f ", num);
	printf("is : %.0f\n", result);	
	puts("\n"); //puts is the same as printf lol 
	main( );
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

    switch (select)
    {
    case 1:
        printf("enter a number: ");
        scanf("%f", &num);
        result = tan(num);
        printf("tan of %.2f is: %.2f", num, result);
        break;

    case 2:
        printf("enter a number: ");
        scanf("%f", &num);
        result = cos(num);
        printf("cos of %.2f is: %.2f", num, result);
        break;

    case 3:
        printf("enter a number: ");
        scanf("%f", &num);
        result = sin(num);
        printf("sin of %.2f is: %.2f", num, result);
        break;

    case 4:
        printf("enter a number: ");
        scanf("%f", &num);
        result = acos(num);
        printf("cos inverse of %.2f is: %.2f", num, result);
        break;

    case 5:
        printf("enter a number: ");
        scanf("%f", &num);
        result = atan(num);
        printf("tan inverse of %.2f is: %.2f", num, result);
        break;

    case 6:
        printf("enter a number: ");
        scanf("%f", &num);
        result = asin(num);
        printf("sin inverse of %.2f is: %.2f", num, result);
        break;

    default:
        printf("Invalid input");
        break;
    }
}