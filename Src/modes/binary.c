#include<stdio.h>
void D2B(); // decimal to binary conversion
void B2D(); // binary to decimal conversion
int main ( )
{
	int option;
	printf("Enter :\n");
	printf("1. DECI to BIN\n");
	printf("2. BIN to DECI\n");
	scanf("%d", &option);
	
	switch (option)
	{
		case 1 : D2B(); // calling the function
		break;
		case 2 : B2D( );
	}
	
	
	
return 0;
}

void D2B()
{
long num,i,temp;
printf("Input a number to find binary code\n");
scanf("%ld",&num);
while(num!=0)
{
i=1;
while(i<=num/2)
{
i=i*2;
}
num=num-i;
printf("1");
temp=i/2;
while(num<temp)
{
temp=temp/2;
printf("0");
}
}
}

void B2D()
{
}