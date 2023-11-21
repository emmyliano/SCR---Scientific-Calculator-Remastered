#include<stdio.h>
void D2B(); // decimal to binary conversion
void B2D(); // binary to decimal conversion

int main()
{
   int mode, j, k;
   int i = 1;
   int isValid; // ascertain if the user-input is registered; 1 = false, 0 = true

   for (isValid = 1; i <= 4; i++){ // if the user enters an invalid input, this will loop the menu, till input is correct
      int option;

      printf("Enter :\n");
      printf("1. DECI to BIN\n");
      printf("2. BIN to DECI\n");
      printf("3. Return to main menu\n");
      printf("4. Exit the program\n");
      printf("> ");
      scanf("%d", &option);
      
      switch (option)
      {
         case 1 : D2B(); // calling the function, convert decimal to binary
         break;

         case 2 : B2D(); // calling the fuction, convert binary to decimal
         break;

         case 3:
            system("cls");
            continue;
            // link the main menu here

         case 4:
            printf("The program has been terminated");
            return 0;

         default:
            printf("\nInvalid Selection!\n\n");
            //continue;
	   }
   }

   return 0;
}

void D2B()
{
   long num, i, temp;
   printf("Input a number to find binary code\n ");
   scanf("%ld", &num);
   while(num!=0)
   {
      i = 1;

      while(i<=num/2)
      {
         i = i * 2;
      }

      num = num - i;
      printf("1\n");
      temp = i / 2;
      
      while(num<temp)
      {
         temp = temp / 2;
         printf("0\n");
      }
   }
   printf("\n");
}

void B2D()
{ 
   
}