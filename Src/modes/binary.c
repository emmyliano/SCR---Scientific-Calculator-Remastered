#include<stdio.h>
void main()
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
return 0;
}
